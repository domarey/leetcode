class Solution(object):
    def minOperations(self, boxes):
        """
        :type boxes: str
        :rtype: List[int]
        """
        n = len(boxes)
        res = []
        for i in range(n):
            count = 0
            for j in range(n):
                if i != j:
                    if boxes[j] == '1':
                        count += abs(i-j)
            res.append(count)
        return res

        
