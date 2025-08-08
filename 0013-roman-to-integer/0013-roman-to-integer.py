class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = 0
        prev = 0
        r = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        for i in reversed(s):
            value = r[i]
            if value < prev:
                n -= value
            else:
                n += value
            prev = value
        return n
            



        