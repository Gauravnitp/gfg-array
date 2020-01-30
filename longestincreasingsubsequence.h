int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(), len = 0, index ;
        if(nums.empty())
              return 0;
        vector<int> dp(n, INT_MAX);  
        int i, j;
        for(i = 0;i < n; i++)
        {
            index = lower_bound(dp.begin(), dp.end(), nums[i]) - dp.begin();
            if(index == len)
            {
                len++;
            }
            dp[index] = nums[i];
        }
        return len;
    }