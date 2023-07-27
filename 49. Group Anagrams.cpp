//============sort + map=======================

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string,vector<string>> map;
        for(int i=0;i<strs.size();i++){
            string tmp=strs[i];
            sort(tmp.begin(),tmp.end());
            map[tmp].push_back(strs[i]);

        }
        vector<vector<string>> ans;
        for(auto i: map){
            ans.push_back(i.second);
        }
        return ans;
        
    }
};