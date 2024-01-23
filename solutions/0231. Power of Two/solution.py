class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        if n < 0 :
            return False
        bitForm = "{0:b}".format(n)
        bitSum = sum(int(bit) for bit in bitForm )
        return bitSum == int(bitForm[0]) and bitSum == 1
        
