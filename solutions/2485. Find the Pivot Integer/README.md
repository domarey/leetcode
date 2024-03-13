# 0791. Custom Sort String

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Example 3](#example-3)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/find-the-pivot-integer/description/).

You are given two strings `order` and `s`. All the characters of `order` are unique and were sorted in some custom order previously.

Given a positive integer `n`, find the pivot integer `x` such that the sum of all elements between `1` and `x` inclusively equals the sum of all elements between `x` and `n` inclusively.

Return the pivot integer `x`. If no such integer exists, return `-1`.

### Example 1:
- Input:
  ```
  n = 8
  ```
  
- Output:
  ```
  6
  ```

### Example 2:
- Input:
  ```
  n = 1
  ```
  
- Output:
  ```
  1
  ```

  ### Example 3:
- Input:
  ```
  n = 4
  ```
  
- Output:
  ```
  -1
  ```

### Constraints:
  - $1 <=$ `n` $<= 1000$.


# Solution explanation
Beats 100% of the users:

<img src="img/submission-results.png" width="400"/>
