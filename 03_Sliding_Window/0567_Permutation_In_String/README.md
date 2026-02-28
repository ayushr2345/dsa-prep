# [567. Permutation in String](https://leetcode.com/problems/permutation-in-string) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

Given two strings `s1` and `s2`, return `true` if `s2` contains a permutation of `s1`, or `false` otherwise.

In other words, return `true` if one of `s1`'s permutations is the substring of `s2`.

## 📌 Examples

### Example 1

**Input:** s1 = "ab", s2 = "eidbaooo"  
**Output:** true  
**Explanation:** s2 contains one permutation of s1 ("ba").  

---

### Example 2

**Input:** s1 = "ab", s2 = "eidboaoo"  
**Output:** false  


## 📊 Constraints

- `1 <= s1.length, s2.length <= 10^4`
- `s1` and `s2` consist of lowercase English letters.

## 🧠 Key Idea


## 🏷️ Tags

`Principal` `Hash Table` `Two Pointers` `String` `Sliding Window`
 

## 🧠 Approach

We make use of sliding window approach
1. Maintain 2 arrays of frequencies of both s1, s2
2. Fill s1 freq array before running the main loop
3. Run the main sliding window loop, and at the end, equate both the freq arrays, if equal return true, else continue with the loop. 

---

## ⏱️ Time Complexity

O(`N`) - as left and right pointer are only moving forward

---

## 💾 Space Complexity

O(`1`) - as 2 arrays used of 26 length both which is constant.