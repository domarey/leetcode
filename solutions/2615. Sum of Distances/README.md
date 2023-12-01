
# 2615. Sum of Distances
# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/sum-of-distances/description/).

You are given a 0-indexed integer array `nums`. There exists an array `arr` of length `nums.length`, where `arr[i]` is the sum of `|i - j|` over all `j` such that `nums[j] == nums[i]` and `j != i`. If there is no such `j`, set `arr[i]` to be `0`.

Return the array `arr`.

### Example 1:
- Input:
  ```
  nums = [1,3,1,1,2]
  ```
- Output:
  ```
  [5,0,3,4,0]
  ```
- Explanation:
  ```When i = 0, nums[0] == nums[2] and nums[0] == nums[3]. Therefore, arr[0] = |0 - 2| + |0 - 3| = 5. 
  When i = 1, arr[1] = 0 because there is no other index with value 3.
  When i = 2, nums[2] == nums[0] and nums[2] == nums[3]. Therefore, arr[2] = |2 - 0| + |2 - 3| = 3. 
  When i = 3, nums[3] == nums[0] and nums[3] == nums[2]. Therefore, arr[3] = |3 - 0| + |3 - 2| = 4. 
  When i = 4, arr[4] = 0 because there is no other index with value 2. 
  ```

### Example 2:
- Input:
  ```
  nums = [0,5,3]
  ```
- Output:
  ```
  [0,0,0]
  ```
- Explanation:
  ```
  Since each element in nums is distinct, arr[i] = 0 for all i.
  ```

### Constraints:
```
    1 <= nums.length <= 105
    0 <= nums[i] <= 109
```

# Solution explanation
For each $x_i$ in $nums$, collect all the indices where $x_i$ occurs: $\overrightarrow{a_{x_i}} = [a_{x_i,0}, a_{x_i,1}, \dots, a_{x_i,n}]$.
We have that `arr[i]` $= \sum_{j=0}^{n} |a_{{x_i},i} - a_{{x_i},j}|$

For example:
If $nums = [1,3,1,1,2]$ and we consider $i=0$, we have that $x_0 = 1$ and $\overrightarrow{a_{1}} = [0,2,3]$. So `arr[0]` $`=\sum_{j=0}^{2} |a_{1,i} - a_{1,j}|= |0-0|+|0-2|+|0-3| = 5 `$


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
