# Problems
## 1. [Rotate Image](./RotateImage1.cpp)
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. **DO NOT** allocate another 2D matrix and do the rotation.
```
Input:
matrix = [
            [1, 2, 3],
            [4, 5, 6],
            [7, 8, 9]
         ]

Output:
matrix = [
            [7, 4, 1],
            [8, 5, 2],
            [9, 6, 3]
         ]
```
[LeetCode](https://leetcode.com/problems/rotate-image/)


## 1-2. [Rotate Image](./RotateImage2.cpp)
solve the perevious problem for anticlockwise mode.
```
Input:
matrix = [
            [1, 2, 3],
            [4, 5, 6],
            [7, 8, 9]
         ]

Output:
matrix = [
            [3, 6, 9],
            [2, 5, 8],
            [1, 4, 7]
         ]
```

## 2. [Power](./Pow.cpp)
How would you optimally calculate p^k, where k is a non-negative integer?
```
Input: 2 4
Output: 16

Input: 3 5
Output: 243
```
[link](https://bit.ly/3hgN6wl)


## 3. [Random number](./RandomNumber.cpp)
Given a function that returns a random integer number between 1 and 5, create a function that creates a random integer between 1 and 7.
// add link


## 4. [Missing number](./MissingNumber.cpp)
Find the missing numbers in an unsorted integer array. There might be duplicate numbers in the list.
```
Input: [2, 5, 1, 1, 2, 6, 9, 4, 4]
Output: [3, 7, 8]
```
// add link


## 5. [Find Matrix Saddle Point](./matrixSaddlePoint.cpp)
Given a matrix of n x n size, the task is to find the saddle point of the matrix.
A saddle point is an element of the matrix such that it is the minimum element in its row and maximum in its column.
```
Input:
matrix = [
            [1, 2, 3],
            [4, 5, 6],
            [7, 8, 9]
         ]

Output: 7
// 7 is minimum in its row and maximum in its column.

Input:
matrix = [
            [1, 2, 3],
            [4, 5, 6],
            [10, 18, 4]
         ]

Output: No saddle point
```
[link](https://www.geeksforgeeks.org/saddle-point-matrix/)


## 5-1. [Find Matrix Saddle Point](./matrixSaddlePoint2.cpp)
Find saddle point of matrix like perevious problem.
But an element of the matrix such that it is the maximum element in its row and minimum in its column.
```
Input:
matrix = [
            [1, 2, 3],
            [4, 5, 6],
            [7, 8, 9]
         ]

Output: 3
// 3 is maximum in its row and minimum in its column.
```

## 6. [Set Matrix Zeroes](./SetMatrixZeroes.cpp)
Given an `m x n` integer matrix matrix, if an element is `0`, set its entire row and column to `0`'s, and return the matrix.
You must do it `in place`.
```
Input:
matrix = [
            [1, 1, 1],
            [1, 0, 1],
            [1, 1, 1]
         ]

Output:
matrix = [
            [1, 0, 1],
            [0, 0, 0],
            [1, 0, 1]
         ]
```
[link](https://leetcode.com/problems/set-matrix-zeroes/)


## 7. [ValidParentheses](./ValidParentheses.cpp)
Given a string s containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.
```
Input: s = "{[]}"
Output: true

Input: s = "()[]{}"
Output: true

Input: s = "([)]"
Output: false

Input: s = "(]"
Output: false
```
[link](https://leetcode.com/problems/valid-parentheses/)


## 8. [Sort the Matrix Diagonally](./DiagonallyMatrix.cpp)
Given an `m x n` matrix mat of integers, sort each matrix `diagonal` in ascending order and return the resulting matrix.
<center>
<img alt="" src="https://assets.leetcode.com/uploads/2020/01/21/1482_example_1_2.png" style="width: 500px; height: 198px;">
</center>


```
Input:
mat = [
          [3, 3, 1, 1],
          [2, 2, 1, 2],
          [1, 1, 1, 2]
      ]


Output:
mat = [
          [1, 1, 1, 1],
          [1, 2, 2, 2],
          [1, 2, 3, 3]
      ]
```
[link](https://leetcode.com/problems/sort-the-matrix-diagonally/)


## 8. [Merge Intervals](./MergeIntervals.cpp)
Given an array of intervals where `intervals[i] = [starti, endi]`, merge all overlapping intervals, and return an array of the
non-overlapping intervals that cover all the intervals in the input.
```
Input:
intervals = [
                [1, 3],
                [2, 6],
                [8, 10],
                [15, 18]
            ]


Output: [
            [1,6],
            [8,10],
            [15,18]
        ]

// Explanation: Since intervals [1,3] and [2,6] overlaps, merge them into [1,6].
```
[link](https://leetcode.com/problems/merge-intervals/)
// add google link
