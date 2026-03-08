# [268. Missing Number](https://leetcode.com/problems/missing-number) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return _the only number in the range that is missing from the array._

**Follow up:** Could you implement a solution using only `O(1)` extra space complexity and `O(n)` runtime complexity?

## 📌 Examples

### Example 1

**Input:** nums = [3,0,1]

**Output:** 2

**Explanation:**

`n = 3` since there are 3 numbers, so all numbers are in the range `[0,3]`. 2 is the missing number in the range since it does not appear in `nums`.

---

### Example 2

**Input:** nums = [0,1]

**Output:** 2

**Explanation:**

`n = 2` since there are 2 numbers, so all numbers are in the range `[0,2]`. 2 is the missing number in the range since it does not appear in `nums`.

---

### Example 3

**Input:** nums = [9,6,4,2,3,5,7,0,1]

**Output:** 8

**Explanation:**

`n = 9` since there are 9 numbers, so all numbers are in the range `[0,9]`. 8 is the missing number in the range since it does not appear in `nums`.

## 📊 Constraints

- `n == nums.length`
- `1 <= n <= 10^4`
- `0 <= nums[i] <= n`
- All the numbers of `nums` are **unique**.

## 🧠 Key Idea

XOR of two identical numbers is 0.

if we XOR two identical arrays with 1 mising in one of the array, we get the missing one

## 🏷️ Tags

`Array` `Hash Table` `Math` `Binary Search` `Bit Manipulation` `Sorting`
 

## 🧠 Approach

Approach 1:

1. Take an array `[0, n]` and XOR all the elements and name is `xorComplete`.
2. Iterate through `nums` and name it `xorIncomplete`.
3. Return `xorComplete ^ xorIncomplete` as that will give the missing number.

Approach 2:

1. Instead of taking array, we can find the pattern for `xorComplete` based on `n` which is the size of the `nums` vector.
2. Find `xorComplete` and `xorIncomplete`
3. Return `xorComplete ^ xorIncomplete`

Approach 3: If we observe closely, we can find that in both the solutions, we are doing XOR of 2 same arrays with 1 missing element in one of the array. In XOR order don't matter. So we can XOR the index as well as the nums[i] into the result.

1. `res = nums.size()` -- last element of the complete array.
2. Iterate through the array and do `res ^= i ^ nums[i]`

Other approaches:

1. Simple `sort()` and 2 for loops
2. Add the complete and the incomplete array, subtract them

---

## ⏱️ Time Complexity

Approach 1: O(`N`)

Approach 2: O(`N`)

Approach 3: O(`N`)

---

## 💾 Space Complexity

Approach 1: O(`N`)

Approach 2: O(`1`)

Approach 3: O(`1`)