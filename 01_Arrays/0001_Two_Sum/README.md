# [1. Two Sum](https://leetcode.com/problems/two-sum) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Given an array of integers `nums` and an integer `target`, return _indices of the two numbers such that they add up to `target`_.

You may assume that each input would have **_exactly_ one solution**, and you may not use the _same_ element twice.

You can return the answer in any order.

**Follow-up:** Can you come up with an algorithm that is less than <code>O(n<sup>2</sup>)</code> time complexity?

## 📌 Examples

### Example 1

**Input:** nums = [2,7,11,15], target = 9  
**Output:** [0,1]  
**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].  

---

### Example 2

**Input:** nums = [3,2,4], target = 6  
**Output:** [1,2]  

---

### Example 3

**Input:** nums = [3,3], target = 6  
**Output:** [0,1]  

## 📊 Constraints

- `2 <= nums.length <= 10^4`
- `10^9 <= nums[i] <= 10^9`
- `10^9 <= target <= 10^9`

**Only one valid asnwer exists.**

## 🧠 Key Idea

**Follow-up:** Can you come up with an algorithm that is less than <code>O(n<sup>2</sup>)</code> time complexity?


## 🏷️ Tags

`Junior` `Array` `Hash Table`
 

## 🧠 Approach

**Sol 1 - O(`N^2`)**
1. Iterate through array
2. Find `remaining_target = target - ele`
3. Find remaining_target in rest of the array
4. If found, that is the solution, if not, repeat

**Sol 2 using map - O(`N`)**
1. Iterate through the array
2. remaining_target = target - ele
3. Find remaining_target in unordered map
4. If not found, insert with frequency 1
5. If found, insert index to result vector, break
6. Iterate through the array again, to find the new remaining target
7. Insert the found index

---

## ⏱️ Time Complexity

Solution 1 - O(`N^2`) -  as basic nested for loop.

Solution 2 - O(`N`) - as no nested for loops and used map.

---

## 💾 Space Complexity
Solution 1 - O(`1`) - as no extra space needed.

Solution 2 - O(`N`) - as an unordered map needed.
