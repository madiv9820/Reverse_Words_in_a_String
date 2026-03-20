#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        string output = "";  // 📦 Final reversed string

        vector<string> words;  // 🧩 Stores extracted words
        string currentWord = "";  // 🔤 Buffer to build a word

        // 🔍 Step 1: Traverse input and extract words
        for (char ch : s) {

            // 🧱 Build word if character is not space
            if (ch != ' ') {
                currentWord += ch;
            } 
            else {
                // 🚪 Word boundary detected
                if (currentWord != "") {
                    words.push_back(currentWord);  // 📦 Store word
                }
                currentWord = "";  // 🔄 Reset for next word
            }
        }

        // 🧠 Handle last word (if string doesn't end with space)
        if (currentWord != "") {
            words.push_back(currentWord);
        }

        // 🔁 Step 2: Build output in reverse order
        for (int i = words.size() - 1; i >= 0; --i) {

            output += words[i];  // 🔤 Add word

            // ➕ Add space between words (except last)
            if (i != 0) {
                output += " ";
            }
        }

        // 🧹 Optional: Free memory used by vector (shrink to fit trick)
        vector<string>().swap(words);

        // 🎉 Return final reversed sentence
        return output;
    }
};

#endif