class Solution:
    def maxProduct(self, nums: List[int]) -> int:

        if not nums:
            return 0

        curr_max = curr_min = result = nums[0]

        for i in range(1, len(nums)):
            num = nums[i]

            # Temporary store current max to use for curr_min

            temp_max = curr_max

            curr_max = max(num, temp_max * num, curr_min * num)
            curr_min = min(num, temp_max * num, curr_min * num)

            result = max(result, curr_max)

        return result
        