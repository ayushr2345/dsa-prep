# [242. Valid Anagram](https://leetcode.com/problems/valid-anagram) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.


## 📌 Examples

### Example 1

**Input:**
s = "anagram", t = "nagaram"

**Output:**
true

**Explanation:** 
t can be constructed by using all letters of s just once

---

### Example 2

**Input:**
s = "rat", t = "car"

**Output:**
false

**Explanation:**
t cannot be constructed by using letters in s


## 📊 Constraints

- `1 <= s.length, t.length <= 5 * 10^4`
- `s` and `t` consist of lowercase English letters.

## 🧠 Key Idea

**Follow up:** What if the inputs contain Unicode characters? How would you adapt your solution to such a case?


## 🏷️ Tags

`Hash Table` `String` `Sorting`
 

## 🧠 Approach

An anagram is a word or phrase formed by rearranging the letters of a different word or phrase, using all the original letters exactly once. As the string contains only lower english letters:
1. Take an integer array `arr` of 26 elements and initialize all elements to 0.
2. Iterate through string A and increment index according to ASCII character as index
3. Iterate through string B and decrement index according to ASCII character as index
4. Iterate through `arr`, check if all elements are 0, if all elements are 0, `string A` & `string B` are anagrams, otherwise not.

## ⏱️ Time Complexity
O(`N`) - as iterating through each array exactly once.

---

## 💾 Space Complexity
O(`1`) - as extra array needed for creating hashing array.

## Follow up solution
If the array contains Unicode characters, which has more than 1M characters, we can make use of C++ Map and actually store the character and its frequency in the map as key:value pair and when going through the second string, can subtract from the frequency and in the end the frequency of all of the elements should be 0 in the map.
