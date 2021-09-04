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
https://leetcode.com/problems/score-after-flipping-matrix/


## 9. [XOR Queries of a Subarray](./xorQueries.cpp)
Given the array arr of positive integers and the array queries where
`queries[i] = [Li, Ri]`, for each query i compute the XOR of elements from Li to Ri (that is, `arr[Li] xor arr[Li+1] xor ... xor arr[Ri]`).
Return an array containing the result for the given queries.
```
Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
Output: [2,7,14,8]
Explanation:
The binary representation of the elements in the array are:
1 = 0001
3 = 0011
4 = 0100
8 = 1000
The XOR values for queries are:
[0,1] = 1 xor 3 = 2
[1,2] = 3 xor 4 = 7
[0,3] = 1 xor 3 xor 4 xor 8 = 14
[3,3] = 8
```
[link](https://leetcode.com/problems/xor-queries-of-a-subarray/)


## 10. [Find All Duplicates in an Array](./FindAllDuplicates.cpp) *
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.


Example 1:
```
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]

```

Example 2:
```
Input: nums = [1,1,2]
Output: [1]

```
[link](https://leetcode.com/problems/find-all-duplicates-in-an-array/)

## 11. [First Unique Character in a String](./FirstUniqueCharacter.cpp)
Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
```
Input: s = "leetcode"
Output: 0
```

Example 2:
```
Input: s = "loveleetcode"
Output: 2
```

Example 3:
```
Input: s = "aabb"
Output: -1
```
[link](https://leetcode.com/problems/first-unique-character-in-a-string/)



## 12. [Array With Elements Not Equal to Average of Neighbors](./)
You are given a 0-indexed array nums of distinct integers. You want to rearrange the elements in the array such that every element in the rearranged array is not equal to the average of its neighbors.

More formally, the rearranged array should have the property such that for every i in the range 1 <= i < nums.length - 1, (nums[i-1] + nums[i+1]) / 2 is not equal to nums[i].

Return any rearrangement of nums that meets the requirements.



Example 1:
```
Input: nums = [1,2,3,4,5]
Output: [1,2,4,5,3]
Explanation:
When i=1, nums[i] = 2, and the average of its neighbors is (1+4) / 2 = 2.5.
When i=2, nums[i] = 4, and the average of its neighbors is (2+5) / 2 = 3.5.
When i=3, nums[i] = 5, and the average of its neighbors is (4+3) / 2 = 3.5.
```

Example 2:
```
Input: nums = [6,2,0,9,7]
Output: [9,7,6,2,0]
Explanation:
When i=1, nums[i] = 7, and the average of its neighbors is (9+6) / 2 = 7.5.
When i=2, nums[i] = 6, and the average of its neighbors is (7+2) / 2 = 4.5.
When i=3, nums[i] = 2, and the average of its neighbors is (6+0) / 2 = 3.
```
[link](https://leetcode.com/problems/array-with-elements-not-equal-to-average-of-neighbors/)


add this dp
understand what is it?
https://leetcode.com/problems/word-break/
https://leetcode.com/problems/word-break/discuss/809993/C%2B%2B-DP-oror-Easy-to-understand
https://leetcode.com/problems/word-break/discuss/870741/C%2B%2B-DP-different-approach-Fast-(beats-100-of-submissions)-and-Simple
2 solution my and ..
and understand this answer
https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/


add this to algorithms
https://www.geeksforgeeks.org/subarraysubstring-vs-subsequence-and-programs-to-generate-them/
https://www.geeksforgeeks.org/generating-subarrays-using-recursion/

add this with bitwise ans
https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/solution/
add this and know what
https://leetcode.com/problems/top-k-frequent-elements/solution/
add this
and + more approachs
https://leetcode.com/problems/find-the-duplicate-number/discuss/560089/C%2B%2B-4-different-solutions.-(beats-100-)-Detailed-Explanantion
https://leetcode.com/problems/find-the-duplicate-number/
https://leetcode.com/problems/find-the-duplicate-number/discuss/72846/My-easy-understood-solution-with-O(n)-time-and-O(1)-space-without-modifying-the-array.-With-clear-explanation.

similler to this upper question
https://leetcode.com/problems/find-all-duplicates-in-an-array/

understood why ...
https://leetcode.com/problems/number-of-matching-subsequences/discuss/1289971/C%2B%2B-Solutions-one-with-HashMap-%2B-Binary-Search-other-with-Hashmap
https://leetcode.com/problems/number-of-matching-subsequences/discuss/1290938/C%2B%2B-Array-based-Solution-Explained-~98-Time-~70-Space
https://leetcode.com/problems/number-of-matching-subsequences/


read this solution second
add or not? idk
https://leetcode.com/problems/zigzag-conversion/solution/

dpppp
https://leetcode.com/problems/triangle/discuss/38737/Bottom-Up-5-line-C%2B%2B-Solution
https://leetcode.com/problems/triangle/discuss/38730/DP-Solution-for-Triangle



add this after pow
write my solution
https://leetcode.com/problems/powx-n/
https://leetcode.com/problems/powx-n/discuss/19709/C%2B%2B-4-lines-of-code


https://www.spoj.com/problems/REDARR2/


added before? if yes add link or add...
https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/
simmiler to duplicates


great dppp
https://leetcode.com/problems/interleaving-string/
https://leetcode.com/problems/interleaving-string/discuss/31901/C%2B%2B-dp-solution-with-explanation
https://leetcode.com/problems/interleaving-string/discuss/31879/My-DP-solution-in-C%2B%2B
https://leetcode.com/problems/interleaving-string/discuss/1247165/C%2B%2B-Memoizn(3-variables)-greater-Memoizn(without-3rd-var)-greater-DP-(m*n)-greater-DP(n)
