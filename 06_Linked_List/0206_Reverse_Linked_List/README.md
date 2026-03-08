# [206. Reverse Linked List](https://leetcode.com/problems/reverse-linked-list) ![Easy](https://img.shields.io/badge/Easy-blue)


## 📝 Problem Statement

Given the `head` of a singly linked list, reverse the list, and return _the reversed list_.


**Follow up:** A linked list can be reversed either iteratively or recursively. Could you implement both?

## 📌 Examples

### Example 1

![](https://assets.leetcode.com/uploads/2021/02/19/rev1ex1.jpg)

**Input:** head = [1,2,3,4,5]  
**Output:** [5,4,3,2,1]  

---

### Example 2

![](https://assets.leetcode.com/uploads/2021/02/19/rev1ex2.jpg)

**Input:** head = [1,2]  
**Output:** [2,1]  


---

### Example 3


**Input:** head = []  
**Output:** []  

## 📊 Constraints

- The number of nodes in the list is the range `[0, 5000]`.
- `-5000 <= Node.val <= 5000`

## 🧠 Key Idea


## 🏷️ Tags

`Linked List` `Recursion`
 

## 🧠 Approach

Approach 1 (Iterative): Simple with 3 pointers, reverse links and exit when current = nullptr

Approach 2 (Recursive):

1. Base condition: `if (head == nullptr || head->next == nullptr) { return head; }`
2. Head Recursion: call `ReverseList(head->next)`
3. We will get be at call of second last element, and the reverseElement will be the last one
4. Modify the reverseElement using `head->next->next` to point to `head`
5. `head->next=nullptr`
6 return reverseElement

---

## ⏱️ Time Complexity

Approach 1 (Iterative): O(`N`)

Approach 2 (Recursive): O(`N`)


---

## 💾 Space Complexity

Approach 1 (Iterative): O(`1`)

Approach 2 (Recursive): O(`N`) -- stack calls

