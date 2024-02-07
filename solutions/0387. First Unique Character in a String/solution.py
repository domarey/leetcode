#!/usr/bin/env python3.7

class Solution:
    def firstUniqChar(self, s: str) -> int:
        alphabet = {}
        for c in s:
            if c in alphabet.keys():
                alphabet[c] += 1
            else:
                alphabet[c] = 1

        # The standard Python dict preserves the insertion order in Python 3.7+
        for c in alphabet.keys():
            if alphabet[c] == 1:
                return s.index(c)
        return -1
