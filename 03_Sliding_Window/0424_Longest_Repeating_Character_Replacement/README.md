# [424. Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

You are given a string `s` and an integer `k`. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most `k` times.

Return _the length of the longest substring containing the same letter you can get after performing the above operations_.

## 📌 Examples

### Example 1

**Input:** s = "ABAB", k = 2  
**Output:** 4  
**Explanation:** Replace the two 'A's with two 'B's or vice versa.  

---

### Example 2

**Input:** s = "AABABBA", k = 1  
**Output:** 4  
**Explanation:** Replace the one 'A' in the middle with 'B' and form "AABBBBA".  
The substring "BBBB" has the longest repeating letters, which is 4.  
There may exists other ways to achieve this answer too.


## 📊 Constraints

- `1 <= s.length <= 10^5`
- `s` consists of only uppercase English letters.
- `0 <= k <= s.length`

## 🧠 Key Idea


## 🏷️ Tags

`Junior` `Hash Table` `Sliding Window`
 

## 🧠 Approach

1. We keep a `left` pointer and a `right` pointer, the `right` pointer is traversing through the string characters.
2. We keep a hash table of the characters from `A-Z` of length `26`.
3. In every iteration do the following:
    
    1. Increment the hash table at the appropriate positon of the character
    2. Calculate the new `maxfreq` by comparing the newly inserted char and the original `maxfreq`
    3. Check if our `window - maxfreq` is `<= k`, if true, calculate the max length `max(maxLength, window)`. `window = right - left + 1`.
    4. If `window - maxfreq >k`, it means that we need more replacements than `k` to maintain the current window, so we must free one char from the window, the `left` one and also update the same in `hash`.
    5. maxLength is the answer.

---

## ⏱️ Time Complexity

O(`N`) - as left and right both moves forward

---

## 💾 Space Complexity

O(`1`) - as only used a hash map of `26` elements which is a constant