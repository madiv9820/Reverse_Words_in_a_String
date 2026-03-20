#ifndef SOLUTION_H
#define SOLUTION_H

#include <stdlib.h>
#include <string.h>

// 🔄 Reverse characters in a string between two indices
void reverseRange(char* str, int left, int right) {
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

// 🧹 Clean up spaces:
// - Remove leading/trailing spaces
// - Collapse multiple spaces into one
void normalizeSpaces(char* str) {
    int readStart = 0;
    int readEnd = strlen(str) - 1;

    // 🚫 Skip leading spaces
    while (str[readStart] == ' ') { readStart++; }

    // 🚫 Skip trailing spaces
    while (str[readEnd] == ' ') { readEnd--; }

    int writeIndex = 0;

    // ✨ Rebuild string with clean spacing
    while (readStart <= readEnd) {
        if (str[readStart] != ' ') {
            // Copy characters normally
            str[writeIndex++] = str[readStart++];
        } 
        else {
            // Insert a single space
            str[writeIndex++] = ' ';

            // ⏩ Skip all consecutive spaces
            while (readStart <= readEnd && str[readStart] == ' ') {
                readStart++;
            }
        }
    }

    // 🔚 Null-terminate cleaned string
    str[writeIndex] = '\0';
}

// 🚀 Reverse the order of words in a string
char* reverseWords(char* s) {
    // Step 1: Clean up spaces 🧹
    normalizeSpaces(s);

    int length = strlen(s);

    // Step 2: Reverse entire string 🔄
    reverseRange(s, 0, length - 1);

    // Step 3: Allocate result buffer
    char* output = (char*) malloc((length + 1) * sizeof(char));
    strcpy(output, s);

    int wordStart = 0;
    int current = 0;

    // Step 4: Reverse each word individually 🧩
    while (current < length) {
        // Move to end of current word
        while (current < length && output[current] != ' ') {
            current++;
        }

        // Reverse this word in output
        reverseRange(output, wordStart, current - 1);

        // Move to next word
        current++;
        wordStart = current;
    }

    // 🔚 Handle last word (safety step)
    reverseRange(output, wordStart, length - 1);

    return output;  // 🎉 Words reversed!
}

#endif