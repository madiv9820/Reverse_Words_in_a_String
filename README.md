# 🔁 Reverse Words in a String:- Split and Reverse Approach
### 🚀 Overview
This approach solves the classic **“Reverse Words in a String”** problem by:
1. 🔍 Extracting individual words from the input
2. 📦 Storing them in a temporary structure (array / list / vector)
3. 🔁 Rebuilding the string in **reverse order of words**

### 🧠 Intuition
Instead of reversing the entire string character-by-character (which gets tricky with spaces 😵‍💫), we:
- Treat each word as a unit 🧩
- Reverse the **order of words**, not characters inside them

### ⚙️ Approach (Step-by-Step)
#### 🥇 Step 1: Extract Words
- Traverse the string
- Build words character-by-character
- When a space is encountered:
    - Store the word (if non-empty)
    - Reset buffer

👉 In Python, this is simplified using:
- **`strip()`** → removes extra spaces
- **`split()`** → automatically extracts words

#### 🥈 Step 2: Store Words
- Use:
    - **`char**`** in C
    - **`vector<string>`** in C++
    - **`list`** in Python

#### 🥉 Step 3: Reverse Traversal
- Iterate from **last word → first word**
- Append each word to result

#### 🧱 Step 4: Build Output
- Add space **`" "`** between words
- Avoid trailing spaces ❗

### 🧮 Complexity Analysis
| **Type**                | **Complexity** |
| ------------------- | ---------- |
| ⏱ **Time Complexity**   | **`O(n)`**   |
| 🧠 **Space Complexity** | **`O(n)`**   |

#### 🔍 Why?
- Each character is visited once → O(n)
- Extra storage for words → O(n)

### 🌐 Language Notes
#### 🟦 C / C++
- Manual parsing required 🛠️
- Explicit memory handling (especially in C)
- Use buffers and dynamic allocation

#### 🐍 Python
- Much cleaner thanks to built-ins ✨
- **`split()`** handles multiple spaces automatically
- **`[::-1]`** simplifies reversal

### ✅ Pros
- ✔️ Easy to understand and implement
- ✔️ Works across multiple languages
- ✔️ Handles extra spaces correctly

### ⚠️ Cons
- ❌ Uses extra space (not in-place)
- ❌ Not the most optimal solution for strict constraints

### 🏁 Summary
This **Split & Reverse** approach is perfect when:
- You want clarity over optimization 🧘
- You're writing cross-language solutions 🌍
- You're preparing for interviews and need a solid baseline
---