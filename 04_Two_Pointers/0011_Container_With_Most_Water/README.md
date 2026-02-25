# [11. Container With Most Water](https://leetcode.com/problems/container-with-most-water) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

 

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the <code>i<sup>th</sup></code> line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return _the maximum amount of water a container can store_.

**Notice** that you may not slant the container.


## 📌 Examples

### Example 1

![](https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg)

**Input:** height = [1,8,6,2,5,4,8,3,7]  
**Output:** 49  
**Explanation:** The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.  

---

### Example 2

**Input:** height = [1,1]  
**Output:** 1  



## 📊 Constraints

- `n == height.length`
- `2 <= n <= 10^5`
- `0 <= height[i] <= 10^4`

## 🧠 Key Idea


## 🏷️ Tags

`Array` `Two Pointers` `Greedy`
 

## 🧠 Approach

We use two pointer approach without sorting
1. `low = 0`, `high = heights.size() - 1`
2. loop `while(low < high)`
3. Calculate the volume by multiplying the distance between high and low and the smallest of `high, low`.
4. Keep a `maxVol` variable for max volume, compare and assign the `maxVol` based on recent vol and the `maxVol`.
5. If `height[low] > height[high]` then `high--` and otherwise, `low++`.

---

## ⏱️ Time Complexity

O(`N`)

---

## 💾 Space Complexity

O(`1`)