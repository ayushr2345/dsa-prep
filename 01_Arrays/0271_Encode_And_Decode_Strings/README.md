# [271. Encode And Decode Strings](https://neetcode.io/problems/string-encode-and-decode/question) ![Medium](https://img.shields.io/badge/Medium-yellow)
Used Neetcode as in Leetcode, problem was premium.


## 📝 Problem Statement

 

Design an algorithm to encode **a list of strings** to **a string**. The encoded string is then sent over the network and is decoded back to the original list of strings.

Machine 1 (sender) has the function:

<code class="language-text">string encode(vector<string> strs) {  
    // ... your code  
    return encoded_string;  
}</code>

Machine 2 (receiver) has the function:

<code class="language-text">vector<string> decode(string s) {  
    //... your code  
    return strs;  
}</code>

So Machine 1 does:

<code class="language-text">string encoded_string = encode(strs);</code>

and Machine 2 does:

<code class="language-text">vector<string> strs2 = decode(encoded_string);</code>

`strs2` in Machine 2 should be the same as `strs` in Machine 1.

Implement the `encode` and `decode` methods.

**Constraints:**

*   `0 <= strs.length < 100`
*   `0 <= strs[i].length < 200`
*   `strs[i]` contains any possible characters out of `256` valid ASCII characters.

**Follow up**: Could you write a generalized algorithm to work on any possible set of characters?

## 📌 Examples

### Example 1

**Input:**
["Hello","World"]  


**Output:**
["Hello","World"]  


**Explanation:**
```  
Machine 1:

Codec encoder = new Codec();
String msg = encoder.encode(strs);  
Machine 1 ---msg---> Machine 2`

Machine 2:  
Codec decoder = new Codec();  
String[] strs = decoder.decode(msg);
```

---

### Example 2

**Input:**
[""]  

**Output:**
[""]  



## 📊 Constraints

- `0 <= strs.length < 100`
- `0 <= strs[i].length < 200`
- `strs[i]` contains any possible characters out of `256` valid ASCII characters.

## 🧠 Key Idea
**Follow up**: Could you write a generalized algorithm to work on any possible set of characters?



## 🏷️ Tags

`Array` `String` `Design`
 

## 🧠 Approach
The resultant encoded string should be like this `<length><string>`, and while decoding, get length and decode those many chars from the encoded string.
But the problem here is that length can be 1, 10, 110, etc.
so we need to store length in a fixed amount of characters and can use binary form of the length with padded 0 with a fixed number of bits. Then on the other side, we would know the bit length of the size of the string, we get the bits, convert it from binary to int and take out those many chars from the encoded string.

---

## ⏱️ Time Complexity
O(`N`) - N is length of string vector
O(`M`) - M is length of encoded string

---

## 💾 Space Complexity
O (`sizeof(int) * N`)

