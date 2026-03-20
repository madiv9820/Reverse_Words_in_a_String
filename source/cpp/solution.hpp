#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <string>
using namespace std;

class Solution {
private:
    // 🧹 Normalize spaces in the string:
    // - Remove leading and trailing spaces
    // - Reduce multiple spaces between words to a single space
    void normalizeSpaces(string& str) {
        int readStart = 0;
        int readEnd = str.size() - 1;

        // 🚫 Skip leading spaces
        while (str[readStart] == ' ') {
            readStart++;
        }

        // 🚫 Skip trailing spaces
        while (str[readEnd] == ' ') {
            readEnd--;
        }

        int writeIndex = 0;

        // ✨ Rebuild string with clean spacing
        while (readStart <= readEnd) {
            if (str[readStart] != ' ') {
                // Copy non-space characters
                str[writeIndex++] = str[readStart++];
            } 
            else {
                // Insert a single space between words
                str[writeIndex++] = ' ';

                // ⏩ Skip all consecutive spaces
                while (readStart <= readEnd && str[readStart] == ' ') {
                    readStart++;
                }
            }
        }

        // ✂️ Resize string to remove extra unused characters
        str = str.substr(0, writeIndex);
    }

public:
    string reverseWords(string s) {
        // Step 1: Clean up spaces 🧹
        normalizeSpaces(s);

        // Step 2: Reverse the entire string 🔄
        // Example: "the sky" → "yks eht"
        reverse(s.begin(), s.end());

        int wordStart = 0;
        int current = 0;

        // Step 3: Reverse each word individually 🧩
        while (current < s.size()) {

            // 👉 Move 'current' to the end of the current word
            while (current < s.size() && s[current] != ' ') {
                current++;
            }

            // 🔄 Reverse the current word to correct its orientation
            reverse(s.begin() + wordStart, s.begin() + current);

            // ⏭️ Move to the next word
            current++;
            wordStart = current;
        }

        return s;  // 🎉 Final result: words reversed in-place
    }
};

#endif