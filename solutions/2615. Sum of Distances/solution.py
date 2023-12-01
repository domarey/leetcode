class Solution(object):
    def distance(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        dict = collections.defaultdict(list)
        for i, num in enumerate(nums):
            dict[num].append(i)
        arr = [0]*len(nums)
        for key, value in dict.items():
            s = sum(value)
            partial_sum = 0
            n = len(value)
            for i in range(len(value)):
                partial_sum = partial_sum + value[i]
                arr[value[i]] = value[i]*(2*i-n+2) + s - 2*partial_sum
        return arr
