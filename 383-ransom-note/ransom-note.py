class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:

        magCount = Counter(magazine)

        for val in ransomNote:
            if magCount[val] == 0:
                return False
            magCount[val] -=1

        return True

    
        