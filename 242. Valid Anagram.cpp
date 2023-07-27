class Solution {
//====================method 1 >>>>  using map=====================

public:
    bool isAnagram(string s, string t) {

        unordered_map<char,int> map;
        
        if(s.length()!=t.length()) return false;
        
        else{

        
           for(int i=0;i<s.length();i++){
               map[s[i]]++;
               map[t[i]]--;
           }
        }

        for(auto i : map){
            if(i.second!=0) return false;
        }
        return true;
        
    }
};


//======================= using sort=====================

class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length()!= t.length()) return false;
        
        else{
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());

            for(int i =0;i<s.length();i++){
                if(s[i]!=t[i]) return false;

            }
        }

        return true;
    }
};

//========================
