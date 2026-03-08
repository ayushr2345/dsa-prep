# [7. Reverse Integer](https://leetcode.com/problems/reverse-integer) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

Given a signed 32-bit integer `x`, return `x` _with its digits reversed_. If reversing `x` causes the value to go outside the signed 32-bit integer range <code>[-2<sup>31</sup>, 2<sup>31</sup> - 1]</code>, then return `0`.

**Assume the environment does not allow you to store 64-bit integers (signed or unsigned).**

## 📌 Examples

### Example 1

**Input:** x = 123  
**Output:** 321  


---

### Example 2

**Input:** x = -123  
**Output:** -321  

---

### Example 3

**Input:** x = 120  
**Output:** 21  

## 📊 Constraints

- `-2^31 <= n <= 2^31 - 1`

## 🧠 Key Idea


## 🏷️ Tags

`Math`
 

## 🧠 Approach

Approach 1: 

Reverse the integer using normal `%` and `/` and at each step check

`res > (INT_MAX - digit) / 10 || res < (INT_MIN + digit) / 10`

Approach 2: 

There is a standard check which tells that

`last digit of INT_MAX is 7 and last digit of INT_MIN is 8`

In first approach, second part of if is dead code as y is always +ve.

---

## ⏱️ Time Complexity


O(`log N`)

but in this problem it is 32 bit integer and

`INT_MAX = 2,147,483,647` so while loop will run 10 times... so can say that it is
O(`1`)

---

## 💾 Space Complexity

O(`1`)
