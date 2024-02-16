# 1481. Least Number of Unique Integers after K Removals

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/description/).

Given an array of integers `arr` and an integer `k`. Find the least number of unique integers after removing exactly `k` elements.

    
### Example 1:
- Input:
  ```
  arr = [5,5,4]
  k = 1
  ```
- Output:
  ```
  1
  ```

### Example 2:
- Input:
  ```
  arr = [4,3,1,1,3,3,2]
  k = 3
  ```
- Output:
  ```
  2
  ```

  
  ### Constraints:
  - $1 <=$ `arr.length` $<= 10^5$;
  - $1 <=$ `arr[i]` $<= 10^9$;
  - $0 <=$ `k` $<=$ `arr.length`.
