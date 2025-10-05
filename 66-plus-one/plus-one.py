from typing import List

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        # Convert the list of digits into a number
        num = 0
        for digit in digits:
            num = num * 10 + digit

        # Add one
        num += 1

        # Convert back to list of digits
        result = [int(d) for d in str(num)]
        return result
