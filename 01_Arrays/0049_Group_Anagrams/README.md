# [49. Group Anagrams](<Problem_link>) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

 

Given an array of strings `strs`, group the anagrams together. You can return the answer in **any order**.

## 📌 Examples

### Example 1

**Input:** strs = ["eat","tea","tan","ate","nat","bat"]

**Output:** [["bat"],["nat","tan"],["ate","eat","tea"]]

**Explanation:**

*   There is no string in strs that can be rearranged to form `"bat"`.
*   The strings `"nat"` and `"tan"` are anagrams as they can be rearranged to form each other.
*   The strings `"ate"`, `"eat"`, and `"tea"` are anagrams as they can be rearranged to form each other.

---

### Example 2

**Input:** strs = [""]

**Output:** [[""]]

---

### Example 3

**Input:** strs = ["a"]

**Output:** [["a"]]

## 📊 Constraints

- `1 <= strs.length <= 10^4`
- `0 <= strs[i].length <= 100`
- `strs[i]` consists of lowercase English letters.

## 🧠 Key Idea


## 🏷️ Tags

`Array` `Hash Table` `String` `Sorting`
 

## 🧠 Approach

Approach 1: Nested for loop, check for anagram, if is anagram push in a vector -- TLE

Approach 2: Using Ordered map `std::map` of the sorted string and value as the vector of the anagrams.
0. `std::map<string, vector<string>>`
1. Go through each string in `strs`
2. Sort the current string
3. `push_back` in the vector the unsorted string.
4. Go through the map, and push the `vector<string>` to the result `vector<vector<string>>`.


## ⏱️ Time Complexity
O(`N log N`) - as `std::sort` is used.

---

## 💾 Space Complexity
O(`N`) - as map is used.