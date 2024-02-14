# 2149. Rearrange Array Elements by Sign

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/rearrange-array-elements-by-sign/description/).

You are given a 0-indexed integer array `nums` of even length consisting of an equal number of positive and negative integers.

You should rearrange the elements of nums such that the modified array follows the given conditions:

- Every consecutive pair of integers has opposite signs;
- for all integers with the same sign, the order in which they were present in nums is preserved;
- the rearranged array begins with a positive integer.

Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

### Example 1:
- Input:
  ```
  nums = [3,1,-2,-5,2,-4]
  ```
  
- Output:
  ```
  [3,-2,1,-5,2,-4]
  ```

### Example 2:
- Input:
  ```
  nums = [-1,1]
  ```
  
- Output:
  ```
  nums = [1,-1]
  ```

### Constraints:
- `nums.length` $== 3$
- $1 <=$ `nums[i]` $<= 100$
- $2 <=$ `nums.length` $<= 2 * 10^5$;
- `nums.length` is even;
- $1 <= |$ `nums[i]` $| <= 10^5$;
- `nums` consists of equal number of positive and negative integers.

