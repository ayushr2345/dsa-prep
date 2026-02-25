# [128. Valid Palindrome](https://leetcode.com/problems/valid-palindrome) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

A phrase is a **palindrome** if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` _if it is a **palindrome**, or_ `false` _otherwise_.

## 📌 Examples

### Example 1

**Input:** s = "A man, a plan, a canal: Panama"  
**Output:** true  
**Explanation:** "amanaplanacanalpanama" is a palindrome.  

---

### Example 2

**Input:** s = "race a car"  
**Output:** false  
**Explanation:** "raceacar" is not a palindrome.  

---

### Example 3

**Input:** s = " "  
**Output:** true  
**Explanation:** s is an empty string "" after removing non-alphanumeric characters.  
Since an empty string reads the same forward and backward, it is a palindrome.  

## 📊 Constraints

- `1 <= s.length <= 2 * 10^5`
- `s` consists only of printable ASCII characters.

## 🧠 Key Idea


## 🏷️ Tags

`Two Pointers` `Strings`
 

## 🧠 Approach

1. Create the clean string first by removing all non alphanumeric characters from the string.
2. Two pointers, one at `i = 0` other at `j = size() - 1`, equate both and if not equal return false, if equal `i++` & `j--`.

---

## ⏱️ Time Complexity

O(`N`)

---

## 💾 Space Complexity

O(`1`)