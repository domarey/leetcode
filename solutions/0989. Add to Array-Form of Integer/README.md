
# 2615. Sum of Distances
# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/sum-of-distances/description/).

Given the `root` of an n-ary tree, return the preorder traversal of its nodes' values.

Nary-Tree input serialization is represented in their level order traversal. Each group of children is separated by the null value.

### Example 1:
- Input:
  ```
  root = [1,null,3,2,4,null,5,6]
  ```
- Output:
  ```
  [1,3,5,6,2,4]
  ```

### Example 2:
- Input:
  ```
  root = [1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]
  ```
- Output:
  ```
  [1,2,3,6,7,11,14,4,8,12,5,9,13,10]
  ```


### Constraints:
- The number of nodes in the tree is in the range `[0, 10^4]`
- `0 <= Node.val <= 10^4`
- The height of the n-ary tree is less than or equal to `1000`.

```
    1 <= nums.length <= 105
    0 <= nums[i] <= 109
```

# Solution explanation
For each $x_i$ in `nums`, collect all the indices where $x_i$ occurs: $\overrightarrow{a_{x_i}} = [a_{x_i,0}, a_{x_i,1}, \dots, a_{x_i,n}]$.
We have that 
```math
\text{arr[i]} = \sum_{j=0}^{n} |a_{{x_i},i} - a_{{x_i},j}|
```

For example:

If `nums` $= [1,3,1,1,2]$ and we consider $i=0$, we have that $x_0 = 1$ and $\overrightarrow{a_{1}} = [0,2,3]$. So
```math
\text{arr[0]} = \sum_{j=0}^{2} |a_{1,i} - a_{1,j}|= |0-0|+|0-2|+|0-3| = 5
```


For each $x_i$, it holds ($x_i$ omitted for simplicity):
$`
\begin{align}
\sum_{j=0}^{n} |a_{i} - a_{j}| = {}\\
& = (a_{i} - a_{0}) + (a_{i} - a_{1}) + \dots + (a_{i} - a_{i}) + (a_{i+1} - a_{i}) + \dots + (a_{n} - a_{i}) = \\
& = (i+1)a_{i} - \sum_{j=0}^{i} a_j + \sum_{j=i+1}^{n} a_j - (n+1-i-2)a_i = \\
& = (2i+2-n)a_{i} - \sum_{j=0}^{i} a_j + \sum_{j=i+1}^{n} a_j + (\sum_{j=0}^{i} a_j - \sum_{j=0}^{i} a_j) = \\
& = (2i+2-n)a_{i} - 2*\sum_{j=0}^{i} a_j + \sum_{j=0}^{n} a_j. 
\end{align}
`$

### Complexity
- Time complexity: $O(n^2)$
