class Solution:
    def thirdMax(self, nums: List[int]) -> int:

        if not nums:
            return None

        unique = list(set(nums))
        unique.sort(reverse=True)

        if len(unique) >= 3:
            return unique[2]
        else:
            return unique[0]

        