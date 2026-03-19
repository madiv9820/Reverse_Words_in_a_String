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
---