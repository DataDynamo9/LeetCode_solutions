class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> m;
        for(int i =0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int max=INT_MIN;
        int ans=-1;
        for(auto it: m){
            if(it.second > max){
                max =it.second;
                ans=it.first;
            }
        }
        return ans;
        
    }
};