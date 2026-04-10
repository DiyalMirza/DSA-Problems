class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        
        count = 0
        maxVal= 0

        for num in nums:
            if num == 1:
                count +=1
                maxVal = max(maxVal, count)
            else:
                count = 0

        return maxVal





        