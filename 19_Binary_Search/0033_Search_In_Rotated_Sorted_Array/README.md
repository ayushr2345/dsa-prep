# [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

There is an integer array `nums` sorted in ascending order (with **distinct** values).

Prior to being passed to your function, `nums` is **possibly left rotated** at an unknown index `k` (`1 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (**0-indexed**). For example, `[0,1,2,4,5,6,7]` might be left rotated by `3` indices and become `[4,5,6,7,0,1,2]`.

Given the array `nums` **after** the possible rotation and an integer `target`, return _the index of_ `target` _if it is in_ `nums`_, or_ `-1` _if it is not in_ `nums`.

You must write an algorithm with `O(log n)` runtime complexity.

## 📌 Examples

### Example 1

**Input:** nums = [4,5,6,7,0,1,2], target = 0  
**Output:** 4  

---

### Example 2

**Input:** nums = [4,5,6,7,0,1,2], target = 3  
**Output:** -1  

---

### Example 3

**Input:** nums = [1], target = 0  
**Output:** -1  
## 📊 Constraints

- `1 <= nums.length <= 5000`
- `-10^4 <= nums[i] <= 10^4`
- All values of `nums` are **unique**.
- `nums` is an ascending array that is possibly rotated.
- `-10^4 <= target <= 10^4`

## 🧠 Key Idea


## 🏷️ Tags

`Array` `Binary Search`
 

## 🧠 Approach

1. Rotated sorted array - sorted array will have 2 sorted parts with a differentiation in between.
2. We need to find where the array is cut in between which will have 2 sorted part arrays
3. We check if `nums[low] <= nums[mid]` because if it is true, we know that left half is sorted. 
    3.1 We check if it is presnet inside this left sorted part if yes we apply binary search
    3.2 if not present, discard this part of the array
4. We do the same thing for the right part of the array as we did for left part which is check if the target present in the right part of the array.

---

## ⏱️ Time Complexity

O(`logN`)

---

## 💾 Space Complexity

O(`1`)