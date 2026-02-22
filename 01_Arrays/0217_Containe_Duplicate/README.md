# [217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate/) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Given an integer array `nums`, return:

- `true` if any value appears **at least twice** in the array  
- `false` if every element is distinct

## 📌 Examples

### Example 1

**Input:**
nums = [1, 2, 3, 1]

**Output:**
true

**Explanation:**
The element `1` occurs at indices `0` and `3`.

---

### Example 2

**Input:**
nums = [1, 2, 3, 4]

**Output:**
false

**Explanation:**
All elements are distinct.

---

### Example 3

**Input:**
nums = [1,1,1,3,3,4,3,2,4,2]

**Output:**
true

## 📊 Constraints

- `1 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`

## 🧠 Key Idea

We need to determine whether **any duplicate exists** in the array.

## 🏷️ Tags

`Array` `Hash Table` `Sorting`


## 🧠 Approach

Sort the array first.  
Then iterate through it and check if any two **adjacent elements are equal**.  
If yes → duplicate exists → return `true`.  
Otherwise → return `false`.


## ⏱️ Time Complexity

O(N log N) — due to sorting.

---

## 💾 Space Complexity

O(1) — `std::sort` sorts in-place.