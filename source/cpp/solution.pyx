from libcpp.string cimport string

# 🔗 Declare C++ class and method from header file
cdef extern from 'solution.hpp':
    cdef cppclass Solution:
        Solution() except +                  # 🏗️ Constructor (handle exceptions)
        string reverseWords(string s)        # 🔁 Function to reverse words


# 🐍 Python wrapper for C++ Solution class
cdef class cppSolution:
    cdef Solution *ptr                      # 📌 Pointer to C++ Solution object

    def __init__(self) -> None:
        # 🏗️ Allocate memory for C++ object
        self.ptr = new Solution()

    def __dealloc__(self) -> None:
        # 🧹 Free allocated memory to prevent memory leaks
        del self.ptr

    def cpp_reverseWords(self, s):
        """
        🔄 Wrapper function:
        - Converts Python string ➡️ C++ string
        - Calls C++ function
        - Converts result back ➡️ Python string
        """

        # 🔤 Convert Python string to C++ string (UTF-8 encoding)
        cdef string cpp_string = s.encode("utf-8")

        # ⚙️ Call C++ reverseWords implementation
        cdef string result = self.ptr.reverseWords(cpp_string)

        # 🔙 Convert C++ string back to Python string
        return result.decode("utf-8")