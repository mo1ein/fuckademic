
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
