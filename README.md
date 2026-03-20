# 🔁 Reverse Words in a String - Inplace Reverse Approach

### 🚀 Overview
This approach solves the classic “Reverse Words in a String” problem by:
- **🧹 Normalizing spaces** — remove leading/trailing spaces and reduce multiple spaces to one
- **🔄 Reversing the entire string**
- **🧩 Reversing each word individually** to restore proper orientation

### 🧠 Intuition
- Treat **each word as a unit 🧩**
- Reverse **the order of words**, not the characters inside them
- Steps are identical across languages:
    1. Clean spaces
    2. Reverse the full string
    3. Reverse each word individually
- ✅ In **C/C++**, this can be done fully in-place
- 🐍 In **Python**, a mutable list is used to simulate in-place behavior

### ⚙️ Step-by-Step Approach
#### 🥇 Step 1: Normalize / Clean Spaces
- Remove leading/trailing spaces
- Collapse multiple spaces into one
- Example:
    ```
    "  hello   world  " -> "hello world"
    ```

#### 🥈 Step 2: Reverse Entire String
- Reverse all characters
- Example:
    ```
    "hello world" -> "dlrow olleh"
    ```

#### 🥉 Step 3: Reverse Each Word Individually
- Iterate through the string/list
- Reverse characters of each word (between spaces)
- Example:
    ```
    "dlrow olleh" -> "world hello"
    ```

#### 🧱 Step 4: Build / Return Output
- **C**: can use **`malloc`** for output, or reverse **in-place** ✅
- **C++**: use **`string`** iterators and STL **`reverse`** for fully in-place 🔄
- **Python**: strings are immutable, so use a list or build a new string 📝

### 🧮 Complexity Analysis
| **Language** | **Time Complexity** | **Space Complexity** | **In-Place**?                   |
| -------- | --------------- | ---------------- | --------------------------- |
| C        | O(n) ⏱️         | O(n) optional 💾 | ✅ Yes (if reversing in `s`)  |
| C++      | O(n) ⏱️         | O(1) (in-place)  | ✅ Yes                       |
| Python   | O(n) ⏱️         | O(n) 💾          | ❌ No (strings immutable)    |


### 🌐 Language Notes
#### 🟦 C
- Manual parsing and memory management required 🛠️
- Optional in-place by reversing words directly in the original string

#### 🟦 C++
- STL `reverse` + string iterators make in-place reversal simple ⚡
- No extra allocations required if reversing in the original string

#### 🐍 Python
- Strings are immutable 🚫
- Extra memory required to simulate in-place with **`list(s)`**
- Functions: **`normalizeSpaces`**, **`reverse`** (on list), then rebuild string

### ✅ Pros
- Clear and easy to understand 🧘
- Works across C, C++, Python 🌍
- Handles extra spaces correctly 🧹
- Optional in-place solution in C/C++ ✅

### ⚠️ Cons
- Python requires extra memory 💾
- Slightly more complex than simple split & reverse
- Not optimal if strict **O(1) space** is required in Python

### 🔹 Summary
This **Clean & In-Place** approach works consistently across **C, C++, and Python**, making it ideal for:
- 🧩 Interview preparation
- 🌍 Cross-language implementations
- ✨ Understanding string reversal and word handling mechanics

Bonus: In **C**, you can avoid extra memory by skipping the output buffer and performing **all reversals directly in the original string ✅**

---