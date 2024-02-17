# 1642. Furthest Building You Can Reach

# Overview
- [Description](#description)
  - [Example 1](#example-1)
  - [Example 2](#example-2)
  - [Example 3](#example-3)
  - [Constraints](#constraints)
- [Solution explanation](#solution-explanation)

# Description
Original [here](https://leetcode.com/problems/furthest-building-you-can-reach/description/).

You are given an integer array `heights` representing the heights of buildings, some `bricks`, and some `ladders`.

You start your journey from building `0` and move to the next building by possibly using bricks or ladders.

While moving from building `i` to building `i+1` (0-indexed),
- if the current building's height is **greater** than or **equal** to the next building's height, you do not need a ladder or bricks;
- if the current building's height is **less** than the next building's height, you can either use $1$ `ladder` or $(h[i+1] - h[i])$ `bricks`.

Return the furthest building index (0-indexed) you can reach if you use the given ladders and bricks optimally.
    
### Example 1:
- Input:
  ```
  heights = [4,2,7,6,9,14,12]
  bricks = 5
  ladders = 1
  ```
- Output:
  ```
  4
  ```

### Example 2:
- Input:
  ```
  heights = [4,12,2,7,3,18,20,3,19]
  bricks = 10
  ladders = 2
  ```
- Output:
  ```
  7
  ```

### Example 3:
- Input:
  ```
  heights = [14,3,19,3]
  bricks = 17
  ladders = 0
  ```
- Output:
  ```
  3
  ```
  
### Constraints:
  - $1 <=$ `heights.length` $<= 10^5$;
  - $1 <=$ `heights[i]` $<= 10^6$;
  - $0 <=$ `bricks` $<= 10^9$;
  - $0 <=$ `ladders` $<=$ `heights.length`.

# Solution explanation
Iterate over the buildings: save the largest `ladders` jumps and the sum the remaining ones (these are the ones you use the bricks for), and stop whenever this sum exceeds `bricks`.

