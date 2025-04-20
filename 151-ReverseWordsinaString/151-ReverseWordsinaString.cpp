// Last updated: 4/20/2025, 10:24:17 PM
class Solution {
public:
    string reverseWords(string s) {

        int n = s.length();
        string ans = "";

        reverse(s.begin(), s.end());

        // adding single word to the ans

        for (int i =0; i< n; i++){
            string word= "";

            while(i < n && s[i] != ' '){ // single word add
                word += s[i];
                i++;
            }

            reverse (word.begin(), word.end()); // reverse single word

            if(word.length() > 0){  // add single word to ans
                ans += " " + word;
            
            }
        }
        return ans.substr(1); // remove initial space
    }
};