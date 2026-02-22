# [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

Given an integer array `nums` and an integer `k`, return _the_ `k` _most frequent elements_. You may return the answer in **any order**.

## 📌 Examples

### Example 1

**Input:** nums = [1,1,1,2,2,3], k = 2

**Output:** [1,2]

---

### Example 2

**Input:** nums = [1], k = 1

**Output:** [1]

---

### Example 3

**Input:** nums = [1,2,1,2,1,2,3,1,3,2], k = 2

**Output:** [1,2]

## 📊 Constraints

- `1 <= nums.length <= 10^5`
- `-10^4 <= nums[i] <= 10^4`
- `k` is in the range `[1, the number of unique elements in the array]`.
- It is **guaranteed** that the answer is **unique**.

## 🧠 Key Idea
**Follow up:** Your algorithm's time complexity must be better than `O(n log n)`, where n is the array's size.


## 🏷️ Tags

`Array` `Hash Table` `Divide and Conquer` `Sorting` `Heap (Priority Queue)` `Bucket Sort` `Counting` `Quickselect`
 

## 🧠 Approach

Approach 1:
1. Calculate the freq of elements in a map
2. Create another map of `frequency: vector<int>`, reverse of `1`.
3. Iterate from end (largest frequency at end) and get the top `k` frequency elements.

Approach 2: (**Bucket Sort**)
1. Calculate the freq of the elements in an `unordered_map`.
2. Create a vector of vectors (`buckets`) to store the `freq (index of vector) : elements (nested vector)`
3. Go through the bucket and find the largest `k` elements.

Approach 3: (**Min Heap**)
1. Calculate the freq of the elements in an `unordered_map`.
2. Create a `Min Heap` using `priority_queue` which will store the `freq -> ele`

    `priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;`
3. Iterator over the freq `unordered_map` and push elements in the `minHeap` `{ele.second, ele,first}`
4. Check the size of the `minHeap`, if `>k`, `pop` from the `minHeap`.
5. This `pop` is done to remove the smallest element from the `minHeap`. (As this is a `Min Heap` through `priority_queue`, `stl` will handle the removing of smallest element, read `priority_queue`).
6. Iterate over `minHeap` and store all the `ele` (`minHeapEle.second`) in the result vector and pop the `minHeapEle`.


---

## ⏱️ Time Complexity

Approach 1: O(`N log N`) - as doing insert in `map`.
Approach 2: O(`N`) - as doing insert in `unordered_map`. Preferred if `k` is large
Approach 3: O(`N log k`) - as doing insert in `unordered_map`. Preferred is `k` is small

---

## 💾 Space Complexity

Approach 1: O(`N`) - as used map.

Approach 2: O(`N`) - as used map.

Approach 3: O(`N`) - as used map.

