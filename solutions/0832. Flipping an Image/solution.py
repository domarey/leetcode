class Solution(object):
    def flip(self,image):
        flipped = []
        for row in image:
            flipped.append(list(reversed(row)))
        return flipped

    def invert(self,image):
        inverted = []
        for row in image:
            inverted.append([1-e for e in row])
        return inverted

    def flipAndInvertImage(self, image):
        """
        :type image: List[List[int]]
        :rtype: List[List[int]]
        """
        return self.invert(self.flip(image))
