class Solution(object):
    def finalValueAfterOperations(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        x = 0
        for operation in operations:
            if operation[1] == '+':
                x += 1
            else:
                x -= 1
        return x
