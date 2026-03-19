import unittest, json, os
from timeout_decorator import timeout
from source.cpp.solution import cppSolution

class test_cpp_Solution(unittest.TestCase):
    def setUp(self):
        """
        🛠️ Setup test environment:
        - Locate test_cases.json 📂
        - Load all test cases 🧪
        - Initialize solution instance 🐍
        """
        # 📍 Get current directory of this test file
        currentDirectory = os.path.dirname(os.path.abspath(__file__))
        
        # 📄 Build path to JSON test cases file
        filePath = os.path.join(currentDirectory, 'cases/test_cases.json')

        # 📥 Load test cases from JSON file
        with open(filePath, mode="r", encoding="utf-8") as read_file:
            self.__testcases = json.load(read_file)
            
            # 🧠 Initialize solution object
            self.__solution = cppSolution()

        return super().setUp()
    
    @timeout(1)  # ⏱️ Ensure each test runs within 1 second (performance safety)
    def test(self):
        """
        🚀 Run all test cases:
        - Iterate through each test case
        - Execute solution
        - Validate output ✅
        """
        for testcase in self.__testcases:
            # 🏷️ Extract test metadata
            testName: str = testcase['title']
            s: str = testcase['input']
            expectedOutput: str = testcase['output']

            # 🔍 Run subTest for better debugging (isolates failures)
            with self.subTest(testName):
                
                # ⚙️ Call solution method
                actualOutput: str = self.__solution.cpp_reverseWords(s=s)
                
                # ✅ Assert expected vs actual output
                self.assertEqual(actualOutput, expectedOutput)


# ▶️ Entry point for running tests
if __name__ == '__main__':
    unittest.main()