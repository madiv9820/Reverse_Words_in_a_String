from typing import List

class pySolution:
    def py_reverseWords(self, s: str) -> str:

        # 🔄 Reverse characters in a list between two indices
        def reverse(s: List[str], start: int, end: int):
            while start < end:
                s[start], s[end] = s[end], s[start]  # Swap characters
                start += 1
                end -= 1

        # 🧹 Normalize spaces:
        # - Remove leading/trailing spaces
        # - Reduce multiple spaces between words to a single space
        # Returns the new "logical" length of the list
        def normalizeSpaces(str_List: List[str]) -> int:
            readStart: int = 0
            readEnd: int = len(str_List) - 1

            # 🚫 Skip leading spaces
            while str_List[readStart] == ' ':
                readStart += 1

            # 🚫 Skip trailing spaces
            while str_List[readEnd] == ' ':
                readEnd -= 1

            writeIndex: int = 0

            # ✨ Rebuild the list with clean spacing
            while readStart <= readEnd:
                if str_List[readStart] != ' ':
                    str_List[writeIndex] = str_List[readStart]  # Copy character
                    writeIndex += 1
                    readStart += 1
                else:
                    # Insert a single space between words
                    str_List[writeIndex] = ' '
                    writeIndex += 1

                    # ⏩ Skip consecutive spaces
                    while readStart <= readEnd and str_List[readStart] == ' ':
                        readStart += 1
            
            return writeIndex  # 🏁 New logical length of cleaned list

        # Convert string to a mutable list 📝
        str_List: List[str] = list(s)

        # Step 1: Normalize spaces 🧹
        lastIndex: int = normalizeSpaces(str_List)

        # Step 2: Reverse the entire string 🔄
        reverse(str_List, 0, lastIndex - 1)

        # Step 3: Reverse each word individually 🧩
        wordStart: int = 0
        current: int = 0

        while current < lastIndex:
            # Move `current` to the end of the current word
            while current < lastIndex and str_List[current] != ' ':
                current += 1
            
            # Reverse the current word to fix orientation 🔄
            reverse(str_List, wordStart, current - 1)

            # ⏭️ Move to the next word
            current += 1
            wordStart = current

        # Step 4: Join the list up to lastIndex to form final string 🎉
        return ''.join(x for x in str_List[:lastIndex])