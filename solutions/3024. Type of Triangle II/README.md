# 3024. Type of Triangle II

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/type-of-triangle-ii/description/).

You are given a 0-indexed integer array `nums` of size 3 which can form the sides of a triangle.
- A triangle is called equilateral if it has all sides of equal length.
- A triangle is called isosceles if it has exactly two sides of equal length.
- A triangle is called scalene if all its sides are of different lengths.

Return a string representing the type of triangle that can be formed or `"none"` if it cannot form a triangle.

### Example 1:
- Input:
  ```
  nums = [3,3,3]
  ```
  
- Output:
  ```
  "equilateral"
  ```

### Example 2:
- Input:
  ```
  nums = [3,4,5]
  ```
  
- Output:
  ```
  "scalene"
  ```

### Constraints:
- `nums.length` $== 3$
- $1 <=$ `nums[i]` $<= 100$

