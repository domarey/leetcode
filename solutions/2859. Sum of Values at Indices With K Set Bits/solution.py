class Solution(object):
    def sumIndicesWithKSetBits(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        res = 0
        for i in range(len(nums)):
            nbits = 0
            for bit in "{0:b}".format(i):
                if bit == '1':
                    nbits += 1
            if nbits == k:
                res += nums[i]
        return res
