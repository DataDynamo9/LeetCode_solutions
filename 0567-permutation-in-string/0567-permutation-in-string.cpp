class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()){
            return false;
        }
         unordered_map<char , int>m;
         for(char x:s1){
            m[x]++;
         }
         unordered_map<char,int>window;
         int i=0;
         int j=0;
        while(j<s2.length()){
            window[s2[j]]++;
            if(j-i+1 == s1.length()){
                if(window == m){
                    return true;

                }
                window[s2[i]]--;
                if(window[s2[i]]==0){
                    window.erase(s2[i]);
                    
                }
                i++;
            }
          j++;  
        }
        return false;
    }
};