# [338. Counting Bits](https://leetcode.com/problems/counting-bits) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Given an integer `n`, return _an array_ `ans` _of length_ `n + 1` _such that for each_ `i` (`0 <= i <= n`)_,_ `ans[i]` _is the **number of**_ `1`_**'s** in the binary representation of_ `i`.

**Follow up:**

*   It is very easy to come up with a solution with a runtime of `O(n log n)`. Can you do it in linear time `O(n)` and possibly in a single pass?
*   Can you do it without using any built-in function (i.e., like `__builtin_popcount` in C++)?

## 📌 Examples

### Example 1

**Input:** n = 2  
**Output:** [0,1,1]  
**Explanation:**  
0 --> 0  
1 --> 1  
2 --> 10  

---

### Example 2

**Input:** n = 5  
**Output:** [0,1,1,2,1,2]  
**Explanation:**  
0 --> 0  
1 --> 1  
2 --> 10  
3 --> 11  
4 --> 100  
5 --> 101  

## 📊 Constraints

- `0 <= n <= 10^5`

## 🧠 Key Idea


## 🏷️ Tags

`Dynamic Programming` `Bit Manipulation`
 

## 🧠 Approach

`Approach 1:` Iterate through the array, calculate num bits in each of the numbers using masking

`Approach 2:` Iterate through the array, calculate num bits in each of the numbers using built-in function `__builtin-popcount()`.

`Approach 3:` Iterate through the array, calculate num buts in each of the numbers using `DP` -- 
```
res[0] = 0;
offset = 1;
for (int i = `; i <= n; i++) {
    if (i == 2 * offset) {
        offset = 2 * offset  OR offset = i;
    }
    res[i] = 1 + res[i - offset];
}
```

---

## ⏱️ Time Complexity

`Approach 1:` O(`NlogN`)

`Approach 2:` O(`NlogN`)

`Approach 3:` O(`N`)

---

## 💾 Space Complexity

`Approach 1:` O(`1`)

`Approach 1:` O(`1`)

`Approach 1:` O(`1`)

`Result array not included in space complexity`