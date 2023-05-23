class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        result = 0
        mode = 1
        for i in range(len(s)-1, 0 - 1, -1):
            if s[i] == 'I':
                if mode > 1:
                    result -=1
                else:
                    result += 1
                    mode = 1
            elif s[i] == 'V':
                result += 5
                mode = 5
            elif s[i] == 'X':
                if mode > 10:
                    result -= 10
                else:
                    result += 10
                    mode = 10
            elif s[i] == 'L':
                result += 50
                mode = 50
            elif s[i] == 'C':
                if mode > 100:
                    result -= 100
                else:
                    result += 100
                    mode = 100
            elif s[i] == 'D':
                result += 500
                mode = 500
            elif s[i] == 'M':
                result += 1000
                mode = 1000
        return result