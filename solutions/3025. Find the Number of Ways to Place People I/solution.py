class Solution(object):
    def numberOfPairs(self, points):
        """
        :type points: List[List[int]]
        :rtype: int
        """
        orderedPoints = sorted(points, key=lambda k: (k[0], -k[1]))
        count = 0
        for i in range(len(orderedPoints)-1):
            for j in range(i+1,len(orderedPoints)):
                if orderedPoints[i][1] >= orderedPoints[j][1]:
                        if j-i >  1:
                            pointInside = False
                            for k in range(i+1,j):
                                if orderedPoints[k][1] <= orderedPoints[i][1] and orderedPoints[k][1] >= orderedPoints[j][1]:
                                    pointInside = True
                            if not pointInside:
                                count += 1
                        else:
                            count += 1
        return count
        
