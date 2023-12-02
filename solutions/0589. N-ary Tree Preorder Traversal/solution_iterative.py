"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def preorder(self, root: 'Node') -> List[int]:
        res = []
        if not root:
            return res
        stack = [root]
        while stack:
            curr = stack.pop()
            res.append(curr.val)
            for child in reversed(curr.children):
                stack.append(child)
        return res
