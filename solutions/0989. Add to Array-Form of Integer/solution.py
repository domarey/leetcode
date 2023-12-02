class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        sys.set_int_max_str_digits(20000)  # the input may exceed the max dimension
        j = int(''.join(map(str, num)))
        res = str(j+k)
        return [int(e) for e in res]
