# 1291. Sequential Digits

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/sequential-digits/description/).
An integer has *sequential digits* if and only if each digit in the number is one more than the previous digit.

Return a **sorted** list of all the integers in the range `[low, high]` inclusive that have sequential digits.


### Example 1:
- Input:
  ```
  low = 100
  high = 300
  ```
  
- Output:
  ```
  [123,234]
  ```

### Example 2:
- Input:
  ```
  low = 1000
  high = 13000
  ```
  
- Output:
  ```
  [1234,2345,3456,4567,5678,6789,12345]
  ```


### Constraints:
  - $10 <=$ `low` $<=$ `low` $<= 10^9$
