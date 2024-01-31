class Solution(object):
    def sortPeople(self, names, heights):
        """
        :type names: List[str]
        :type heights: List[int]
        :rtype: List[str]
        """
        d = {}
        for n,h in zip(names,heights):
            d[h] = n
        dKeys = list(d.keys())
        dKeys.sort(reverse=True)
        return [d[k] for k in dKeys]
