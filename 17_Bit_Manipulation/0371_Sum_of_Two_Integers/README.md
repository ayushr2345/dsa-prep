# [371. Sum of Two Integers](https://leetcode.com/problems/sum-of-two-integers) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

Given two integers `a` and `b`, return _the sum of the two integers without using the operators_ `+` _and_ `-`.

## 📌 Examples

### Example 1

**Input:** a = 1, b = 2  
**Output:** 3  
---

### Example 2

**Input:** a = 2, b = 3  
**Output:** 5  

## 📊 Constraints

- `-1000 <= a, b <= 1000`

## 🧠 Key Idea

Sum of two bits is `( (1U << i) & a ) ^ ( (1U << i) & b )`
Carry of two bits is `add ? carry << 1 : (( (1U << i) & a ) & ( (1U << i) & b )) << 1`

## 🏷️ Tags

`Math` `Bit Manipulation`
 

## 🧠 Approach

Approach 1: (Like a full adder in hardware -- not needed here as CPU can do all XOR and all AND on all the bits at once)

1. Carry out bit by bit, addition and carry and update result by `res |= add ^ carry`

Approach 2:

1. We can do XOR in `1` go and carry in `1` go.
2. Then left shift the carry and continue till carry = 0;

---

## ⏱️ Time Complexity

Approach 1: O(`1`)

Approach 2: O(`1`)


---

## 💾 Space Complexity

Approach 1: O(`1`)

Approach 2: O(`1`)
