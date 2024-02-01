class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        climbs = [1,2,]
        for i in range(2,n):
            climbs.append(climbs[i-1]+climbs[i-2])
        return climbs[n-1]
        
