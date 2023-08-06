//============= printing lcs -> bottom up with "not common" gives supersequence.

class Solution {
public:

    

    string shortestCommonSupersequence(string s1, string s2) {
        
        int m = s1.length();
        int n= s2.length();

        vector<vector<int>> t (m+1, vector<int> (n+1));

        for(int i=0;i<m+1; i++){
            for(int j=0; j<n+1; j++){
                if(i==0 || j==0) t[i][j]=0;

            }
        }

        for(int i=1;i<m+1; i++){
            for(int j=1; j<n+1; j++){
                
                if(s1[i-1]==s2[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                
                else 
                    t[i][j] = max (t[i-1][j], t[i][j-1]);

            }
    }
    //================= till here lcs ================
    // from now,...... printing the lcs from the bottom with not common string value give the supersequence    

    int i= m;
    int j= n;
    string s = "";

    while(i>0 && j>0){
          if(s1[i-1]==s2[j-1]){
              s.push_back(s1[i-1]); // any form s1 or s2;
              i--;
              j--;
          }

          else {
              if( t[i-1][j] > t[i][j-1]){ // this is the noet common part
                  s.push_back(s1[i-1]); // minimum from  t[i-1][j] and t[i][j-1] and Append character from s1 to the supersequence.
                  i--;
              }
              else {                    // this is the noet common part
                  s.push_back(s2[j-1]); // minimum from  t[i-1][j] and t[i][j-1] and Append character from s2 to the supersequence.
                  j--;         
              }
            
          }
      }

      while(i>0) {
          s.push_back(s1[i-1]); // if any left;
          i--;
      }
       while(j>0) {
          s.push_back(s2[j-1]); // if any left;
          j--;
      }
    
    reverse(s.begin(),s.end());
    return s;
}    
};