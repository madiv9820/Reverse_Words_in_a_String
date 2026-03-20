#ifndef SOLUTION_H
#define SOLUTION_H

#include <stdlib.h>
#include <string.h>

char* reverseWords(char* s) {
    // 📏 Length of input string
    int length = strlen(s);

    // 📦 Result buffer (max possible size)
    char* output = (char*) malloc((length + 1) * sizeof(char));
    int outputIndex = 0;  // 📍 Tracks position in output

    // 🧩 Array to store extracted words
    char** words = (char**) malloc((length + 1) * sizeof(char*));
    int wordCount = 0;

    // 🔤 Buffer to build current word
    char* wordBuffer = (char*) malloc((length + 1) * sizeof(char));
    int wordLength = 0;

    int i = 0, j = 0;

    // 🔍 Step 1: Extract words from input
    for (i = 0; s[i] != '\0'; ++i) {

        // 🧱 Build word if not space
        if (s[i] != ' ') {
            wordBuffer[wordLength++] = s[i];
        } 
        else {
            // 🚪 Word boundary detected
            if (wordLength > 0) {
                wordBuffer[wordLength] = '\0';  // 🛑 End word

                // 📦 Store word
                words[wordCount] = (char*) malloc((wordLength + 1) * sizeof(char));
                strcpy(words[wordCount], wordBuffer);
                wordCount++;
            }

            // 🔄 Reset buffer for next word
            free(wordBuffer);
            wordBuffer = (char*) malloc((length + 1) * sizeof(char));
            wordLength = 0;
        }
    }

    // 🧠 Handle last word (if exists)
    if (wordLength > 0) {
        wordBuffer[wordLength] = '\0';

        words[wordCount] = (char*) malloc((wordLength + 1) * sizeof(char));
        strcpy(words[wordCount], wordBuffer);
        wordCount++;

        free(wordBuffer);
    }

    // 🔁 Step 2: Build output in reverse order
    for (i = wordCount - 1; i >= 0; --i) {

        // 🔤 Copy characters of each word
        for (j = 0; words[i][j] != '\0'; ++j) {
            output[outputIndex++] = words[i][j];
        }

        // ➕ Add space between words (except last)
        if (i != 0) {
            output[outputIndex++] = ' ';
        }
    }

    // 🧹 Step 3: Free memory for words
    for (i = 0; i < wordCount; ++i) {
        free(words[i]);
    }
    free(words);

    // 🛑 Null terminate result
    output[outputIndex] = '\0';

    // 🎉 Return final reversed string
    return output;
}

#endif