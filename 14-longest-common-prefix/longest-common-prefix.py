class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:

        # Check if the input list is empty
        if not strs:
            return ""

        # Edge case: first string is empty
        if strs[0] == "":
            return ""

        # Loop through each character index in the first string
        for i in range(len(strs[0])):
            for string in strs[1:]:
                if (len(string)<=i or strs[0][i] != string[i]):
                    return strs[0][:i]

            
        # If all characters matched for the entire first string, return it as the common prefix    
        return strs[0]

        