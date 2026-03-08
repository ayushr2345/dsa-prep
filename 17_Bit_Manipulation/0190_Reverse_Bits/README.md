# [190. Reverse Bits](https://leetcode.com/problems/reverse-bits) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Reverse bits of a given 32 bits signed integer.

**Follow up:** If this function is called many times, how would you optimize it?

## 📌 Examples

### Example 1

**Input:** n = 43261596

**Output:** 964176192

**Explanation:**

| Integer | Binary |
| 43261596 | 00000010100101000001111010011100 |
| 964176192 | 00111001011110000010100101000000 |

---

### Example 2

**Input:** n = 2147483644

**Output:** 1073741822

**Explanation:**

| Integer | Binary |
| 2147483644 | 01111111111111111111111111111100 |
| 1073741822 | 00111111111111111111111111111110 |

## 📊 Constraints

- `0 <= n <= 2^31 - 2`
- `n` is even

## 🧠 Key Idea


## 🏷️ Tags

`Divide and Conquer` `Bit Manipulation`
 

## 🧠 Approach

Approach 1: Using `std::bitset` library
1. Go through the bits, push the bit from the MSB side of the result bitset result
2. Return the `bitset.toulong()` by casting to int.

Approach 2: Plain bit manipulation
1. Go through the bits of the number
2. Shift the bits to left by 1
3. Check if the current bit is 1, if it is 1, add 1 to the LSB of the res by doing `|=`

---

## ⏱️ Time Complexity

Approach 1: O(`1`)
Approach 2: O(`1`)

---

## 💾 Space Complexity

Approach 1: O(`1`)
Approach 2: O(`1`)