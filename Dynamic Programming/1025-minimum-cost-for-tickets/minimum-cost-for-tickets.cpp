class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        // Set up a DP array
        vector<int> dp(days.size() + 1, 0);
        
        // Iterate through each day
        for (int i = 1; i <= days.size(); i++) {
            // Current day in the 'days' array
            int currentDay = days[i - 1];

            // Case 1:
            dp[i] = dp[i - 1] + costs[0];

            // Case 2:
            int last7Day = i - 1;
            while (last7Day >= 0 && days[last7Day] > currentDay - 7) {
                last7Day--;
            }
            dp[i] = min(dp[i], dp[last7Day + 1] + costs[1]);

            // Case 3:
            int last30Day = i - 1;
            while (last30Day >= 0 && days[last30Day] > currentDay - 30) {
                last30Day--;
            }
            dp[i] = min(dp[i], dp[last30Day + 1] + costs[2]);
        }

        // Return the result 
        return dp[days.size()];
    }
};
