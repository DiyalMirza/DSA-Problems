// Last updated: 4/20/2025, 10:26:11 PM
class Solution {
public:
    int compress(vector<char>& chars) {
        
        int idx = 0;
        int n = chars.size();


        for (int i = 0; i<n; i++){
            int count = 0;
            char ch = chars[i];


            while(i<n && ch == chars[i]){

                i++;
                count++;
            }

            if (count == 1){
                chars[idx++] = ch;
            }

            else {
                chars[idx++] = ch;

                string str = to_string(count);
                for (char dig : str){
                    chars[idx++] = dig;

                }
                
            }
            i--;
        }

        chars.resize(idx);
        return idx;


        
    }
};