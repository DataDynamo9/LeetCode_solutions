class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>m;
        for(char c : t){
            m[c]++;
        }
                unordered_map<char, int>window;
                int i=0;
                int j=0;
                int count=t.size();
                int start=0;
                int minLen=INT_MAX;
                while(j<s.length()){
                    window[s[j]]++;
                    if(window[s[j]] <= m[s[j]]){
                        count--;
                    }
                    while(count==0){
                        int len=j-i+1;
                        if(len < minLen){
                            minLen=len;
                            start=i;
                        }
                        window[s[i]]--;
                        if(window[s[i]]< m[s[i]]){
                            count ++;
                        }
                        i++;
                    }
                    
                j++;
                }
             if(minLen == INT_MAX){
                return "";
             }
        return s.substr(start ,minLen );
    }
};