class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int> m;
        int sum=0;
        for(int a: nums1){
            for(int b :nums2){
                sum=a+b;
                
                m[sum]++;
            } 
        } int count=0;
        for(int c: nums3){
            for(int d :nums4){
               int key=-(c+d);
                if(m.find(key)!=m.end()){
                    count+=m[key];
                }
             }
        } 
      return count;  
    }
};