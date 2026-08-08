class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        stack<int>st;
        for(int i = temperatures.size()-1;i>=0;i--){
            int element=temperatures[i];
            if(st.empty()){
                st.push(i);
                ans[i]=0;
                continue;
            }while(!st.empty() && temperatures[st.top()]<= element){
                st.pop();
            }if(st.empty()){
                ans[i]=0;
            }else{
                ans[i]=st.top()-i;
            }
            st.push(i);
        }
        return ans;
    }
};