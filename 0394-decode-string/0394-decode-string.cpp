class Solution {
public:
    string decodeString(string s) {
        stack<int>st;
        stack<string>tc;
        int n=s.length();
        int num=0;
        string str="";
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }else if(isalpha(s[i])){
                str+=s[i];
            }
            else if(s[i] == '[' ){
                st.push(num);
                tc.push(str);
                num=0;
                str="";
            }else if(s[i]==']'){
              int  prevnum=st.top();st.pop();
                string prevalpha=tc.top();tc.pop();
                string temp="";
                for(int j=0;j<prevnum;j++){
                    temp+=str;
                }
                str=prevalpha+temp;
            }
        }

      return str;  
    }
};