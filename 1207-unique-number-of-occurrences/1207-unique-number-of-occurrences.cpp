class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i =0;i<arr.size();i++){
            m[arr[i]]++;
        }
        unordered_set<int>seen;
        for(auto it : m){
            if(seen.find(it.second) !=seen.end()){
                return false;
                
            }
            seen.insert(it.second);
        }
 return true;
    }
};