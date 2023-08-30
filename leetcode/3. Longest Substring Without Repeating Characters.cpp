//================================ t= O(n)   s= O(n) =======================
// jumping left pointer directly near the redundant/duplicate.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char,int> map;
        
        int left=0;
        int right=0;
        int len=0;
        int maxiLen=0;

        while(right<s.length()){


            if(map.find(s[right])!=map.end()){
                left=max(map[s[right]]+1, left);
            }

            map[s[right]]=right;
            
            len= right-left+1;
            maxiLen=max(maxiLen,len);
            right++;



        }
        return maxiLen;
    }
};