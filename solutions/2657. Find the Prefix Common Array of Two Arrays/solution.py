class Solution(object):
    def findThePrefixCommonArray(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        count = 0
        C = []
        seenNums = set()
        for i in range(len(A)):
            if A[i] not in seenNums:
                seenNums.add(A[i])
            else:
                count += 1
            if B[i] not in seenNums:
                seenNums.add(B[i])
            else:
                count += 1
            C.append(count)
        return C

        
