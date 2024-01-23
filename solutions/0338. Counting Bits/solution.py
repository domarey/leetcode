class Solution(object):
    def countBits(self, n):
        """
        :type n: int
        :rtype: List[int]
        """
        ans = []
        for i in range(n+1):
            nbits = 0
            for bit in "{0:b}".format(i):
                if bit == '1':
                    nbits += 1
            ans.append(nbits)
        return ans
