class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:

        result = []
        n = len(nums)
        if n == 0:
            return result
        
        left = 0

        while left < n:

            right = left
            
            #Expand the range
            while right + 1 < n and nums[right+1] - nums[right] == 1:
                right +=1

            #Fill the result list
            if right == left:
                result.append(str(nums[left]))
            else:
                result.append(f"{nums[left]}->{nums[right]}")

            #Update the left pointer
            left=right+1 
        
        return result
        