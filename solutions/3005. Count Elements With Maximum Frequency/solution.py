class Solution(object):
    def maxFrequencyElements(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d = {}
        for n in nums:
            if n in d:
                d[n] += 1
            else:
                d[n] = 1
        maxFreq = 0
        freq = 0
        for n in d.values():
            if n > maxFreq:
                maxFreq = n
                freq = 1
            elif n == maxFreq:
                freq += 1
        return maxFreq * freq
