//========================== recursion =======================

class Solution {
 
    private:
    int lcs(string s,string t, int m, int n){
         if(m==0 || n==0) return 0;
        
        if(s[m-1]==t[n-1]) 
            return 1+lcs(s,t, m-1,n-1);
        else{
            return max(lcs(s,t,m-1,n), lcs(s,t,m,n-1));
        }
        
    }
public:
    int longestCommonSubsequence(string s, string t) {
        
        return lcs(s,t,s.length(),t.length());
      
    }
};


// ============================ recursion + matrix ||  memoization================

class Solution {
 
    private:
    int lcs(string s,string q, int m, int n, vector<vector<int>> t){
         if(m==0 || n==0) return 0;
        
        if(t[m][n] != -1) return t[m][n];
        
        else{
             
            if(s[m-1]==q[n-1]) 
                return t[m][n]= 1+lcs(s,q, m-1,n-1, t);
            else{
                return t[m][n]= max(lcs(s,q,m-1,n, t), lcs(s,q,m,n-1,t));
            }
        
            
        }
       
    }
public:
    
   
    int longestCommonSubsequence(string s, string q) {
        int m =s.length();
        int n= q.length();
        
        vector<vector<int>> t(m+1,vector<int>(n+1, -1) );
        
        return lcs(s,q,m,n,t);
      
    }
};

//========================= top down || only matrix =======================


class Solution {
 
public:
    
   
    int longestCommonSubsequence(string s, string q) {
        int m =s.length();
        int n= q.length();
        
       vector<vector<int>> t(m+1, vector<int>(n+1));
        
        for(int i=0;i<m+1; i++){
            for(int j=0; j<n+1 ; j++){
                if(i==0 || j==0) {
                    t[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<m+1; i++){
            for(int j=1; j<n+1 ; j++){
                
                if(s[i-1] == q[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                
                else t[i][j] = max(t[i-1][j],t[i][j-1]);
                
            }
        }
        
        
        
        
        return t[m][n];
      
    }
};