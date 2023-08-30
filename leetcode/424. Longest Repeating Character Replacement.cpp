//======================= O(n)====================


class Solution {
public:
    int characterReplacement(string s, int k) {


        int l=0;
        int r=0;

        int maxiCount=0;
        int maxLen=0;
        int len=0;

        unordered_map<char,int> count;

        while(r<s.length()){
            count[s[r]]++;
            maxiCount=max(maxiCount,count[s[r]]);

            while((r-l+1)-maxiCount > k){
                count[s[l]]--;
                l++;
            }

            len= r-l+1;
            maxLen= max(maxLen,len);
            r++;


        }
        return maxLen;
        
    }
};