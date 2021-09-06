
## 1. [Climbing Stairs](./ClimbingStairs.cpp)
You are climbing a staircase. It takes `n` steps to reach the top.
Each time you can either climb `1` or `2` steps. In how many distinct ways can you climb to the top?
```
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
```

## 2. [Minimum Path Sum](./MinimumPathSum.cpp)
Given a `m x n` grid filled with non-negative numbers, find a path from top left to bottom right, which minimizes the sum of all numbers along its path.
```
Input:
grid = [
          [1, 3, 1],
          [1, 5, 1],
          [4, 2, 1]
       ]

Output: 7 // Because the path 1 → 3 → 1 → 1 → 1 minimizes the sum.
```
[link](https://leetcode.com/problems/minimum-path-sum/)


## 3. [House Robber](./HouseRobber.cpp)
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only
constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically
contact the police if two adjacent houses were broken into on the same night.
Givenan integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight
without alerting the police.
```
Input: nums = [1, 2, 3, 1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
```
[link](https://leetcode.com/problems/house-robber/)


## 4. [Unique Paths](./UniquePaths.cpp)
A robot is located at the top-left corner of a `m x n` grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
How many possible unique paths are there?

<img alt="" src="https://assets.leetcode.com/uploads/2018/10/22/robot_maze.png" style="width: 500px; height: 198px;">

```
Input: m = 3, n = 7
Output: 28

```
[link](https://leetcode.com/problems/unique-paths/)

[approach 1](./UniquePaths.cpp)

[approach 2](./UniquePaths2.cpp)

[approach 3](./UniquePaths3.cpp)


## 5. [Unique Paths II](./UniquePathsII.cpp)
A robot is located at the top-left corner of a `m x n` grid (marked 'Start' in the diagram below).
The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).
Now consider if some obstacles are added to the grids. How many unique paths would there be?
An obstacle and space is marked as 1 and 0 respectively in the grid.

<img alt="" src="https://assets.leetcode.com/uploads/2020/11/04/robot1.jpg" style="width: 250px; height: 200px;">

```
Input: obstacleGrid = [[0,0,0],[0,1,0],[0,0,0]]
Output: 2
Explanation: There is one obstacle in the middle of the 3x3 grid above.
There are two ways to reach the bottom-right corner:
1. Right -> Right -> Down -> Down
2. Down -> Down -> Right -> Right
```

[link](https://leetcode.com/problems/unique-paths-ii/)


## 5. [Triangle](./Triangle.cpp) *
Given a `triangle` array, return the minimum path sum from top to bottom.
For each step, you may move to an adjacent number of the row below.<br/ >
More formally, if you are on index i on the current row, you may move to either index `i` or index `i + 1` on the next row.

Example:
```
Input: triangle = [[2],[3,4],[6,5,7],[4,1,8,3]]
Output: 11
Explanation: The triangle looks like:
   2
  3 4
 6 5 7
4 1 8 3
The minimum path sum from top to bottom is 2 + 3 + 5 + 1 = 11 (underlined above).

```

[link](https://leetcode.com/problems/triangle/)

## 6. [Interleaving String](./InterleavingString.cpp)
Given strings `s1`, `s2`, and `s3`, find whether s3 is formed by an interleaving of s1 and s2.
An interleaving of two strings s and t is a configuration where they are divided into non-empty substrings such that:

- `s = s1 + s2 + ... + sn`
- `t = t1 + t2 + ... + tm`
- `|n - m| <= 1`
- `The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...`

Note: a + b is the concatenation of strings a and b.

Example:

<img alt="" src="https://assets.leetcode.com/uploads/2020/09/02/interleave.jpg" style="width: 561px; height: 203px;">

```
Input: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
Output: true
```

approach 2
one dp
https://leetcode.com/problems/interleaving-string/discuss/31901/C%2B%2B-dp-solution-with-explanation
https://leetcode.com/problems/interleaving-string/discuss/31879/My-DP-solution-in-C%2B%2B
https://leetcode.com/problems/interleaving-string/solution/
https://leetcode.com/problems/interleaving-string/discuss/1247165/C%2B%2B-Memoizn(3-variables)-greater-Memoizn(without-3rd-var)-greater-DP-(m*n)-greater-DP(n)
[link](https://leetcode.com/problems/interleaving-string/solution/)
