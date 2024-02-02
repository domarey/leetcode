
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
- $1 <=$ `tasks.length` $<= 10^5$
- $1 <=$ `tasks[i]` $<= 10^9$

# Solution explanation
- Sort `tasks`.
- Count how many tasks are the same difficulty.
- When the difficulty changes, check if you already computed the minimum rounds for the frequency of the current task in `countTasks`: `countTasks[i]` is the minimum rounds for a task done (frequency) `i` times. If not compute it:
  - for `i` (frequencies) < 2: impossible (-1) since you can only do 2 or 3 tasks;
  - for `i` equal to 2 or 3: 1 round;
  - for `i` > 3: check the rounds for the tasks with frequencies corresponding to `i-2` and `i-3`, pick the smallest non-negative one and add one round.
  For example:
  If the frequency of a task is $6$, I need to check which frequency between $4$ and $3$ requires less rounds: $4$ requires $2$ rounds (of $2$) while $3$ requires only $1$.
