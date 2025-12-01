class Solution:
    def lengthOfLastWord(self, s: str) -> int:

        s = s.rstrip()

        count = 0

        for c in reversed(s):
            if c == ' ':
                break
            
            count += 1
        

        return count
        