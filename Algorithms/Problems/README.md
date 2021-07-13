# Problems
// edit link the answer in link is defferent and its for not clockwise
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
