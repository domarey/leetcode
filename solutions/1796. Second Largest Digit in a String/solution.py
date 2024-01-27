class Solution(object):
    def secondHighest(self, s):
        """
        :type s: str
        :rtype: int
        """
        numbersSet = set([int(n) for n in s if n.isdigit()])
        numbers = sorted(list(numbersSet), reverse=True)
        print(numbers)
        if len(numbers) >= 2 :
            return numbers[1]
        else:
            return -1
