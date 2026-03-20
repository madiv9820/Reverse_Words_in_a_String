# [🔁 Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/description/?envType=study-plan-v2&envId=top-interview-150)
Given a string `s`, your task is to **reverse the order of the words** in it.

### 📌 What is a "word"?
A word is simply a sequence of **non-space characters**. Words in the string are separated by **one or more spaces**.

### 🎯 Your Goal
Return a new string where:
- 🔄 The **order of words is reversed**
- ✂️ **Extra spaces are removed**
- 🔹 Only **one space** separates words
- 🚫 **No leading or trailing spaces**

### 🧠 Examples
- **Example 1**
    ```
    Input:  "the sky is blue"
    Output: "blue is sky the"
    ```
- **Example 2**
    ```
    Input:  "  hello world  "
    Output: "world hello"
    ```
    👉 Notice how leading and trailing spaces are removed!

- Example 3
    ```
    Input:  "a good   example"
    Output: "example good a"
    ```
    👉 Multiple spaces between words are reduced to just one.

### ⚙️ Constraints
- 📏 `1 <= s.length <= 10⁴`
- 🔤 `s` contains:
    - Uppercase & lowercase English letters
    - Digits
    - Spaces `' '`
- ✅ There is **at least one word** in the string

### 💡 Follow-up Challenge
🔥 If your language allows mutable strings:
- Can you solve this **in-place**?
- Using only **O(1) extra space**?

## 🧠 Approaches

| Feature / Aspect             | [**Simple Split & Reverse Approach**](https://github.com/madiv9820/Reverse_Words_in_a_String/tree/Approach_01-Split_and_Reverse) 🟢                                                            | [**In-Place Simulation Approach**](https://github.com/madiv9820/Reverse_Words_in_a_String/tree/Approach_02-Inplace_Reverse) 🔵                                                                                            |
| ---------------------------- | ------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------ |
| **How it works**             | Uses `strip()` → `split()` → `[::-1]` → `join()` 🧹🔄                                             | Converts string to list, normalizes spaces, reverses full list, then reverses each word individually 📝🧩🔄                    |
| **Steps**                    | 1. Remove leading/trailing spaces 🚫 2. Split words 🧹 3. Reverse words 🔄 4. Join with spaces 🎯 | 1. Convert string → list 📝 2. Normalize spaces 🧹 3. Reverse entire list 🔄 4. Reverse each word 🔄 5. Join back to string 🎉 |
| **In-place possible?**       | ❌ Strings immutable; creates a new string 💾                                                      | ✅ Simulates in-place using a list; can be fully in-place for C/C++ style 🔧                                                    |
| **Space Complexity**         | O(n) 💾 (new list of words + output string)                                                       | O(n) 💾 (mutable list of characters)                                                                                           |
| **Time Complexity**          | O(n) ⏱️ (traverse string + split + join)                                                          | O(n) ⏱️ (traverse string + normalize + reverse)                                                                                |
| **Handles multiple spaces?** | ✅ Automatically handled by `split()` 🧹                                                           | ✅ Explicitly handled in `normalizeSpaces()` ✨                                                                                  |
| **Code simplicity**          | ✅ Very concise, easy to read 😄                                                                   | ⚡ More detailed, lower-level, good for interview understanding 🧩                                                              |
| **Best use case**            | Quick solution, Pythonic, readable, short ⏱️                                                      | Simulating in-place behavior, learning mechanics of reversal 🔄, C/C++ adaptation                                              |
| **Emoji summary**            | 🧹🔄🎯                                                                                            | 📝🧹🔄🧩🎉                                                                                                                     |

---