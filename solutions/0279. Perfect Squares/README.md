
# 0279. Perfect Squares
# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/perfect-squares/description/).

Given an integer `n`, return the **least** number of perfect square numbers that sum to `n`.

### Example 1:
- Input:
  ```
  n=12
  ```
- Output:
  ```
  3
  ```
- Explanation:
  ```
  12 = 4 + 4 + 4 
  ```

### Example 2:
- Input:
  ```
  n=13
  ```
- Output:
  ```
  2
  ```
- Explanation:
  ```
  13 = 4 + 9
  ```

### Constraints:
- $1 <=$ `n` $<= 10^4$

# Solution explanation:
1) First generate the perfect squares up to n;
2) then build the array of costs in the following way (Fibonacci-like method):
   - if `m` is a perfect square, its cost is $1$;
   - if not, for each perfect square `p` that is less then `m`, calculate $remainder_{m,p} = m - p$
   - the cost of `m` is the minimum among the calculated $remainder_{m,p} + 1$.
