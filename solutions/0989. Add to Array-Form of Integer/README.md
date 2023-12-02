# 989. Add to Array-Form of Integer
# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/add-to-array-form-of-integer/description/).

The \textbf{array form} of an integer `num` is an array representing its digits in left to right order.

For example, for `num = 1321`, the array form is `[1,3,2,1]`.

Given `num`, the array-form of an integer, and an integer k, return the array-form of the integer num + k.

### Example 1:
- Input:
  ```
  root = [1,null,3,2,4,null,5,6]
  ```
  <img src="img/example1.png" width="256"/>
- Output:
  ```
  [1,3,5,6,2,4]
  ```

### Example 2:
- Input:
  ```
  root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
  ```
  <img src="img/example2.png" width="256"/>
- Output:
  ```
  [1,2,3,6,7,11,14,4,8,12,5,9,13,10]
  ```


### Constraints:
- The number of nodes in the tree is in the range `[0, $10^4$]`
- `0 <= Node.val <= 10^4`
- The height of the n-ary tree is less than or equal to `1000`.


# Solution explanation
### sol-recursive.py
Traverse the tree recursively
### sol-iterative.py
For the iterative solution, we can use a stack:
- push the root;
- repeat until the stack is not empty:
    - pop the first element of the stack;
    - push all its childen in reverse order.
