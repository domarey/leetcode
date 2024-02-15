# 0455. Assign Cookies

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/assign-cookies/description/).


You should give each child at most one cookie.

Each child `i` has a greed factor `g[i]`, which is the minimum size of a cookie that the child will be content with; and each cookie `j` has a size `s[j]`. 
If `s[j]` $>=$ `g[i]`, we can assign the cookie `j` to the child `i`, and the child `i` will be content. Your goal is to maximize the number of your content 
children and output the maximum number.
    
### Example 1:
- Input:
  ```
  g = [1,2,3]

  s = [1,1]
  ```
- Output:
  ```
  1
  ```

### Example 2:
- Input:
  ```
  g = [1,2]

  s = [1,2,3]
  ```
- Output:
  ```
  2
  ```
  
  ### Constraints:
  - $0 <=$ `s.length` $<= 200$;
  - `s` consists of English letters (lower-case and upper-case), digits (0-9), ' ', '+', '-', and '.'.
