class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        //Intilaize
        vector<int> countT(n+1, 0);

        //edge case 
        if (n==1) return 1;

        //Trust Listing
        for(const auto& t:trust){

            int a = t[0];
            int b = t[1];

            countT[a]--;
            countT[b]++;

        }

        for (int i=0; i<=n; i++){

            if (countT[i]==n-1) return i;
        }

        return -1;

        
    }
};