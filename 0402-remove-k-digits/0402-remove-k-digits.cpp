class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int>st;
        if(num.length() == k){
            return "0";

        }
        for(int i= 0;i<num.size();i++){
           while(!st.empty() && k > 0 && num[st.top()] > num[i]){
                  st.pop();
                  k--;
           }
             st.push(i);
           
        }
          while(k>0){
                st.pop();
                k--;
             }

        string ans="";
        while(!st.empty()){
            ans+=num[st.top()];
            st.pop();
           
        }
         reverse(ans.begin(),ans.end());
         int i=0;
        while(i<ans.size()-1 && ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i);
        return ans;
    }
};