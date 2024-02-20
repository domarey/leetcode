# 0049. Group Anagrams

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Example 3](#example-3)
  - [Example 4](#example-4)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/group-anagrams/description/).

Given an array of strings `strs`, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
    
### Example 1:
- Input:
  ```
  s="    -42"
  ```
- Output:
  ```
  -42
  ```

### Example 2:
- Input:
  ```
  s="4193 with words"
  ```
- Output:
  ```
  4193
  ```

### Example 3:
- Input:
  ```
  s="+-1"
  ```
- Output:
  ```
  0
  ```

### Example 4:
- Input:
  ```
  s="  . -42"
  ```
- Output:
  ```
  0
  ```
  
### Constraints:
  - $0 <=$ `s.length` $<= 200$;
  - `s` consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.
