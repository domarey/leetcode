class Solution(object):
    def sortVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = ['A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u']
        vowel_indices = []
        vowels_found = []
        for i in range(len(s)):
            if s[i] in vowels:
                vowel_indices.append(i)
                heappush(vowels_found, s[i])
        for i in range(len(vowel_indices)):
            index = vowel_indices[i]
            s = s[:index] + heappop(vowels_found) + s[index + 1:]
        return s
