class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        count = 0
        for char in reversed(s):
            if char == ' ':
                if count > 0:
                    return count
            else:
                count += 1
        return count
