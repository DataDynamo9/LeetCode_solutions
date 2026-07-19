class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int i = 0;
        int j = 0;
        int sum = 0;
        int ans = INT_MAX;
        while (j < nums.size()) {
            sum += nums[j];
            
             while( sum >= target) {

                int len = j - i + 1;
                ans = min(ans, len);
                sum -= nums[i];
                i++;
            }
            j++;
        }
        if(INT_MAX == ans){
            return 0;
        }
        return ans;
    }
};