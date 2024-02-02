
# 2244. Minimum Rounds to Complete All Tasks
# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/minimum-rounds-to-complete-all-tasks/description/).

You are given a 0-indexed integer array `tasks`, where `tasks[i]` represents the difficulty level of a task. In each round, you can complete either 2 or 3 tasks of the same difficulty level.

Return the minimum rounds required to complete all the tasks, or -1 if it is not possible to complete all the tasks.

### Example 1:
- Input:
  ```
  tasks = [2,2,3,3,2,4,4,4,4,4]
  ```
- Output:
  ```
  4
  ```

### Example 2:
- Input:
  ```
  tasks = [2,3,3]
  ```
- Output:
  ```
  -1
  ```

### Constraints:
```
    1 <= tasks.length <= 105
    1 <= tasks[i] <= 109
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
