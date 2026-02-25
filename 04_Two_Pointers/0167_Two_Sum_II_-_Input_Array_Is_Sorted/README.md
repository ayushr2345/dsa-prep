# [167. Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement


Given a **1-indexed** array of integers `numbers` that is already **_sorted in non-decreasing order_**, find two numbers such that they add up to a specific `target` number. Let these two numbers be <code>numbers[index<sub>1</sub>]</code> and <code>numbers[index<sub>2</sub>]</code> where <code>1 <= index<sub>1</sub> < index<sub>2</sub> <= numbers.length</code>.

Return _the indices of the two numbers_<code>index<sub>1</sub></code> _and_ <code>index<sub>2</sub></code>_, **each incremented by one,** as an integer array_ <code>[index<sub>1</sub>, index<sub>2</sub>]</code> _of length 2._

The tests are generated such that there is **exactly one solution**. You **may not** use the same element twice.

Your solution must use only constant extra space.

**Constraints:**

*   <code>2 <= numbers.length <= 3 * 10<sup>4</sup></code>
*   `-1000 <= numbers[i] <= 1000`
*   `numbers` is sorted in **non-decreasing order**.
*   `-1000 <= target <= 1000`
*   The tests are generated such that there is **exactly one solution**.
## 📌 Examples

### Example 1

**Input:** numbers = [<u>2</u>,<u>7</u>,11,15], target = 9  
**Output:** [1,2]  
**Explanation:** The sum of 2 and 7 is 9\. Therefore, index<sub>1</sub> = 1, index<sub>2</sub> = 2\. We return [1, 2]. 

---

### Example 2

**Input:** numbers = [<u>2</u>,3,<u>4</u>], target = 6  
**Output:** [1,3]  
**Explanation:** The sum of 2 and 4 is 6\. Therefore index<sub>1</sub> = 1, index<sub>2</sub> = 3\. We return [1, 3].  


---

### Example 3

**Input:** numbers = [<u>-1</u>,<u>0</u>], target = -1  
**Output:** [1,2]  
**Explanation:** The sum of -1 and 0 is -1\. Therefore index<sub>1</sub> = 1, index<sub>2</sub> = 2\. We return [1, 2].  


## 📊 Constraints

- `2 <= numbers.length <= 3 * 10^4`
- `-1000 <= numbers[i] <= 1000`
- `numbers` is sorted in **non-decreasing order**.
- `-1000 <= target <= 1000`
- The tests are generated such that there is **exactly one solution**.

## 🧠 Key Idea


## 🏷️ Tags

`Array` `Two Pointers` `Binary Search`
 

## 🧠 Approach

Approach 1: Regular O(`N^2`) approach, take an element, search for element in the array, if not found repeat with next element otherwise return

Approach 2: Modified binary search, in binary search algo, find `sum = nums[low] + nums[high]`, if equal to target, return, otherwise
1. if `target < sum` : `high--`
2. if `target > sum` : `low++`

---

## ⏱️ Time Complexity

Approach 1: O(`N^2`)
Approach 2: O(`log N`)

---

## 💾 Space Complexity

Approach 1: O(`1`)
Approach 2: O(`1`)