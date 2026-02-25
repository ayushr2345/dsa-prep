# [36. Valid Sudoku](https://leetcode.com/problems/valid-sudoku) ![Medium](https://img.shields.io/badge/Medium-yellow)


## 📝 Problem Statement

 

Determine if a `9 x 9` Sudoku board is valid. Only the filled cells need to be validated **according to the following rules**:

1.  Each row must contain the digits `1-9` without repetition.
2.  Each column must contain the digits `1-9` without repetition.
3.  Each of the nine `3 x 3` sub-boxes of the grid must contain the digits `1-9` without repetition.

**Note:**

*   A Sudoku board (partially filled) could be valid but is not necessarily solvable.
*   Only the filled cells need to be validated according to the mentioned rules.

## 📌 Examples

### Example 1

![](https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Sudoku-by-L2G-20050714.svg/250px-Sudoku-by-L2G-20050714.svg.png)

**Input:** board =   
[["5","3",".",".","7",".",".",".","."]  
,["6",".",".","1","9","5",".",".","."]  
,[".","9","8",".",".",".",".","6","."]  
,["8",".",".",".","6",".",".",".","3"]  
,["4",".",".","8",".","3",".",".","1"]  
,["7",".",".",".","2",".",".",".","6"]  
,[".","6",".",".",".",".","2","8","."]  
,[".",".",".","4","1","9",".",".","5"]  
,[".",".",".",".","8",".",".","7","9"]]  
**Output:** true  


---

### Example 2

**Input:** board =   
[["8","3",".",".","7",".",".",".","."]  
,["6",".",".","1","9","5",".",".","."]  
,[".","9","8",".",".",".",".","6","."]  
,["8",".",".",".","6",".",".",".","3"]  
,["4",".",".","8",".","3",".",".","1"]  
,["7",".",".",".","2",".",".",".","6"]  
,[".","6",".",".",".",".","2","8","."]  
,[".",".",".","4","1","9",".",".","5"]  
,[".",".",".",".","8",".",".","7","9"]]  
**Output:** false  
**Explanation:** Same as Example 1, except with the **5** in the top left corner being modified to **8**. Since there are two 8's in the top left 3x3 sub-box, it is invalid.  



## 📊 Constraints

- `board.length == 9`
- `board[i].length == 9`
- `board[i][j]` is a digit `1-9` or `'.'`.

## 🧠 Key Idea


## 🏷️ Tags

`Array` `Hash Table` `Matrix`
 

## 🧠 Approach

Approach 1: Brute Force
1. Find if any duplicate in any rows
2. Find if any duplicate in any columns
3. Find if any duplicate in any rows

Approach 2: 
0. In 1 iteration, do all together, keep sets for all 3: `columns`, `rows`, `squares`, calculate square index using this formula `(i/3)*3+(j/3)`.
1. Find if any duplicate in any rows
2. Find if any duplicate in any columns
3. Find if any duplicate in any rows
4. If no duplicate found, insert into all 3 of them.

---

## ⏱️ Time Complexity

Approach 1: O(`N^2`)
Approach 2: O(`N^2`)

---

## 💾 Space Complexity

Approach 1: O(`N`)
Approach 2: O(`N^2`)