# [704. Binary Search](https://leetcode.com/problems/binary-search) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search `target` in `nums`. If `target` exists, then return its index. Otherwise, return `-1`.

You must write an algorithm with `O(log n)` runtime complexity.


## 📌 Examples

### Example 1

**Input:** nums = [-1,0,3,5,9,12], target = 9  
**Output:** 4  
**Explanation:** 9 exists in nums and its index is 4  

---

**Input:** nums = [-1,0,3,5,9,12], target = 2  
**Output:** -1  
**Explanation:** 2 does not exist in nums so return -1  



## 📊 Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i], target <= 10^4`
- All the integers in `nums` are **unique**.
- `nums` is sorted in ascending order.

## 🧠 Key Idea


## 🏷️ Tags

`Array` `Binary Search`
 

## 🧠 Approach

Simple binary search

---

## ⏱️ Time Complexity

O(`NlogN`) - as if we dont find out answer, we are cutting our search area in half.

---

## 💾 Space Complexity

O(`1`)