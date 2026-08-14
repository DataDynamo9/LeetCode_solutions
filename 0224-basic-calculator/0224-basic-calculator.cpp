class Solution {
public:
    int calculate(string s) {
        stack<long long>st;
        long long result=0;
        long long  num =0;
        int sign=1;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }else if(s[i]=='+'){
                result+=(num*sign);
                num =0;
                sign=1;
            }else if(s[i]=='-'){
                result+=(num*sign);
                num=0;
                sign=-1;
            }else if(s[i]=='('){
                st.push(result);
                st.push(sign);
                
                num=0;
                result=0;
                sign=1;
            }else if(s[i]==')'){
                result+=(num*sign);
                num=0;
                int prevsign=st.top();st.pop();
                int lastnum=st.top();st.pop();
                result*=prevsign;
                result+=lastnum;
                sign=1;
            }

        }
        result+=(num*sign);
        return result;
        
    }

};