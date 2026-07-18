class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int prefixsum=0;
        int count =0;
        for(int i=0; i<nums.size();i++){
            prefixsum +=nums[i];
        
        if(prefixsum == k){
            count++;
        }
        int diff = prefixsum - k;
        if(m.find(diff) != m.end()){
            count+=m[diff];
        }
        m[prefixsum]++;
        }
          return count; 
    }
 
};