from libc.stdlib cimport free

# 🔗 Declare C function from header file
cdef extern from 'solution.h':
    char* reverseWords(char* s)   # 🔁 C function returns dynamically allocated char*


# 🐍 Python wrapper for C implementation
cdef class cSolution:
    def c_reverseWords(self, s):
        """
        🔄 Wrapper function:
        - Convert Python string ➡️ C string
        - Call C function
        - Convert result back ➡️ Python string
        - Free allocated memory 🧹
        """

        # 🔤 Encode Python string to bytes (C-compatible)
        cdef bytes encode = s.encode("utf-8")

        # ⚙️ Call C function (expects char*)
        cdef char* result = reverseWords(encode)

        # 🚨 Check for NULL pointer (memory allocation failure in C)
        if result is NULL: raise MemoryError('reverseWords returned NULL')

        # 🔙 Convert C string back to Python string
        py_result = result.decode("utf-8")

        # 🧹 Free memory allocated in C to avoid memory leaks
        if result is not NULL: free(result)
    
        # ✅ Return final result
        return py_result
