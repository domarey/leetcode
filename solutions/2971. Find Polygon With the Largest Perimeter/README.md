# 2971. Find Polygon With the Largest Perimeter

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/find-polygon-with-the-largest-perimeter/description/).

You are given an array of positive integers `nums` of length `n`.

If you have k (k >= 3) positive real numbers $a_1, a_2, a_3, \dots, a_k$ where $a_1 <= a_2 <= a_3 <= \dots <= a_k$ and $a_1 + a_2 + a_3 + \dots + a_{k-1} > a_k$ , then there always exists a polygon with `k` sides whose lengths are $a_1, a_2, a_3, \dots, a_k$.
The perimeter of a polygon is the sum of lengths of its sides.

Return the largest possible perimeter of a polygon whose sides can be formed from `nums`, or `-1` if it is not possible to create a polygon.

### Example 1:
- Input:
  ```
  nums = [5,5,5]
  ```
- Output:
  ```
  15
  ```

### Example 2:
- Input:
  ```
  nums = [1,12,1,2,5,50,3]
  ```
- Output:
  ```
  12
  ```

  ### Example 3:
- Input:
  ```
  nums = [5,5,50]
  ```
- Output:
  ```
  -1
  ```
  
  ### Constraints:
  - $3 <=$ `n` $<= 10^5$;
  - $1 <=$ `nums[i]` $<= 10^9$;

