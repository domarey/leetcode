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
  - $10 <=$ `low` $<=$ `high` $<= 10^9$

# Solution explanation
Beats 100% of the users:

<img src="img/submission-results.png" width="400"/>


- In a string (`digits`), store digits from 1 to 9;
- Loop over all possible substrings of length in $[$ `nlow` $,$ `nhigh` $]$, with `nlow`,`nhigh` being the number of digits in `low` and `high` respectively;
- Convert each substring to an integer and check if it is within `[low, high]` inclusive.

