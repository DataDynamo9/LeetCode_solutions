class Solution {
public:
    int binarysearch(vector<int>& nums,int target,int left,int right){
        if(left>right){
            return -1;
        }
        int mid=left+(right-left)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]< target){
           return binarysearch(nums, target , mid+1, right);
        }
         return binarysearch(nums, target , left, mid-1);
    }
    int search(vector<int>& nums, int target) {
       return binarysearch(nums,target, 0 , nums.size()-1); 
    }
};