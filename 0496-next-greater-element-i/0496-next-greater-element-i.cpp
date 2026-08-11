class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> arr(nums2.size());
        for (int i = nums2.size() - 1; i >= 0; i--) {

            if (st.empty()) {
                st.push(nums2[i]);
                arr[i] = -1;
                continue;
            }
            if (st.top() > nums2[i]) {
                arr[i] = st.top();
                st.push(nums2[i]); 
                continue;
            }
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (st.empty()) {
                arr[i] = -1;
            } else {
                arr[i] = st.top();
            }
            st.push(nums2[i]);
        }
        vector<int> ans;

        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(arr[j]);
                    break;
                }
            }
        }

        return ans;
    }
};