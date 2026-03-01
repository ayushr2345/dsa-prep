# [20. Valid Parentheses](https://leetcode.com/problems/valid-parentheses) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

 

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

1.  Open brackets must be closed by the same type of brackets.
2.  Open brackets must be closed in the correct order.
3.  Every close bracket has a corresponding open bracket of the same type.


## 📌 Examples

### Example 1

**Input:** s = "()"

**Output:** true

---

### Example 2

**Input:** s = "()[]{}"

**Output:** true

---

### Example 3

**Input:** s = "(]"

**Output:** false

---

### Example 4

**Input:** s = "([])"

**Output:** true

---

### Example 5

**Input:** s = "([)]"

**Output:** false

## 📊 Constraints

- `1 <= s.length <= 10^4`
- `s` consists of parentheses only `'()[]{}'`.

## 🧠 Key Idea


## 🏷️ Tags

`String` `Stack`
 

## 🧠 Approach

Approach 1.
1. Iterate through the string
2. If char found is opening braces, push it in stack
3. If char found is not opening braces, check if tmp is empty, if empty return false, else check for matching braces, if not found, return false
4. At the end of loop, check if stack is empty, if yes return true, else return false

Approach 2:
1. Iterate through the string
2. If char found is opening braces, push the appropriate closing brace in to the stack
3. if char found is not opening braces, check if stack is empty or stack.top != the current char, if this condition true return false, else pop from the stack
4. At the end return stack.empty(), if it is empty it will be true, else false.

---

## ⏱️ Time Complexity

O(`N`)

---

## 💾 Space Complexity

O(`N`)