# [739. Daily Temperatures](https://leetcode.com/problems/daily-temperatures) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

Given an array of integers `temperatures` represents the daily temperatures, return _an array_ `answer` _such that_ `answer[i]` _is the number of days you have to wait after the_<code>i<sup>th</sup></code> _day to get a warmer temperature_. If there is no future day for which this is possible, keep `answer[i] == 0` instead.

## 📌 Examples

### Example 1

**Input:** temperatures = [73,74,75,71,69,72,76,73]  
**Output:** [1,1,4,2,1,1,0,0]  

---

### Example 2

**Input:** temperatures = [30,40,50,60]  
**Output:** [1,1,1,0]  

---

### Example 3

**Input:** temperatures = [30,60,90]  
**Output:** [1,1,0] 

## 📊 Constraints

- `1 <= temperatures.length <= 10^5`
- `30 <= temperatures[i] <= 100`

## 🧠 Key Idea


## 🏷️ Tags

`Staff` `Array` `Stack` `Monotonic Stack` `Weekly Contest 61`


## 🧠 Approach

1. Initialize the result vector, make a stack of pair of temp and the index
2. Iterate through the temperatures array, check if the the top of the stack's temperature if greater than the current temperature, if yes, pop it out and fill the index of the popped temperature as we now know the next big temperature, do this in a loop
3. Push each of the temperature in the stack

---

## ⏱️ Time Complexity

O(`N`)

---

## 💾 Space Complexity
O(`N`)
