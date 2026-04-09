class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:

        if not nums:
            return None
        
        n = len(nums)
        result = []
        

        unique = set(nums)

        for num in range(1,n+1):
            if num not in unique:
                result.append(num)

        return result





        