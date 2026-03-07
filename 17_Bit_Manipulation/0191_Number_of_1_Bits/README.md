# [191. Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Given a positive integer `n`, write a function that returns the number of set bits in its binary representation (also known as the [Hamming weight](http://en.wikipedia.org/wiki/Hamming_weight)).



**Follow up:** If this function is called many times, how would you optimize it?

## 📌 Examples

### Example 1

**Input:** n = 11

**Output:** 3

**Explanation:**

The input binary string **1011** has a total of three set bits.

---

### Example 2

**Input:** n = 128

**Output:** 1

**Explanation:**

The input binary string **10000000** has a total of one set bit.

---

### Example 3

**Input:** n = 2147483645

**Output:** 30

**Explanation:**

The input binary string **1111111111111111111111111111101** has a total of thirty set bits.

## 📊 Constraints

- `1 <= n <= 2^31 - 1`

## 🧠 Key Idea


## 🏷️ Tags

`Divide and Conquer` `Bit Manipulation`
 

## 🧠 Approach

We can create a mask for 32 bits and apply the mask on `n` and increment if the res is true.

---

## ⏱️ Time Complexity

O(`N`)

---

## 💾 Space Complexity

O(`1`)