from typing import List

class pySolution:
    def py_reverseWords(self, s: str) -> str:
        """
        🔁 Reverse words in a string

        Approach:
        1. Remove leading/trailing spaces using strip()
        2. Split string into words (handles multiple spaces automatically)
        3. Reverse the list of words
        4. Join them back with a single space

        Time Complexity: O(n)
        Space Complexity: O(n)
        """

        # 🧹 Step 1 & 2:
        # - strip(): removes leading/trailing spaces
        # - split(): splits by any whitespace (handles multiple spaces)
        allWords: List[str] = s.strip().split()

        # 🔄 Step 3 & 4:
        # - allWords[::-1]: reverses the list of words
        # - join(): combines words with a single space
        return ' '.join(x for x in allWords[::-1])