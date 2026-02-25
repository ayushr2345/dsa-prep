# [128. Longest Consecutive Sequence](https://leetcode.com/problems/longest-consecutive-sequence) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

 

Given an unsorted array of integers `nums`, return _the length of the longest consecutive elements sequence._

You must write an algorithm that runs in `O(n)` time.

## 📌 Examples

### Example 1

**Input:** nums = [100,4,200,1,3,2]  
**Output:** 4  
**Explanation:** The longest consecutive elements sequence is `[1, 2, 3, 4]`. Therefore its length is 4.

---

### Example 2

**Input:** nums = [0,3,7,2,5,8,4,6,0,1]  
**Output:** 9  

---

### Example 3

**Input:** nums = [1,0,1,2]  
**Output:** 3  

## 📊 Constraints

- `0 <= nums.length <= 10^5`
- `10^9 <= nums[i] <= 10`

## 🧠 Key Idea


## 🏷️ Tags

`Array` `Hash Table` `Union Find`
 

## 🧠 Approach

1. Insert all the elements into a min heap
2. Start popping out elements of the min heap and increase the counter by 1 if `prev+1 == pq.top()`.
3. If condition is not met, store the `res` into a temp var and continue the same
4. Return the greater out of `res` and the `tempRes`.

---

## ⏱️ Time Complexity

O(`log N`) - as insertion in a priority queue

---

## 💾 Space Complexity

O(`N`) - as used a priority queue.