//========================== palindrome expansion==================

class Solution {
public:
     int palindromeExp(string s,int l,int r){
         if(l>r) return 0;
        while(l>=0 && r<s.length() && s[l]==s[r]){
            l--;
            r++;
        }

        return r-l-1;
    }



    string longestPalindrome(string s) {
        int start=0;
        int end= 0;
       

        if(s.length()<1) return "";

        for(int i=0;i<s.length();i++){
            
            int len1= palindromeExp(s,i,i);
            int len2= palindromeExp(s,i,i+1);

            int len = max(len1,len2);

            if(len> end- start){

                start= i -(len-1)/2;
                end= i+ len/2;

            }

        } 
        cout<<start<<" "<<end;
      //  if (s.length()%2==0) return s.substr(start,end);
       
        return s.substr(start,end+1);
    }

   
};

//======================== brute force o(n3) + but very high time=================
class Solution {
private:
     bool isPalindrome(string &s,int l,int r){   
        while(l<r ){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

public:
    string longestPalindrome(string s) {
        int n= s.size();
        int startLen =0;
        int maxiLen=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalindrome(s,i,j)){
                    if(j-i+1> maxiLen){
                        maxiLen= j-i+1;
                        startLen= i;
                    }
                }
            }
        }

        return s.substr(startLen, maxiLen);


       
    }

   
};

//==========================brute O(n2) + space O(n3)+  but very high time=======================
class Solution {
private:
     bool isPalindrome(string &s){  
        int l=0;
        int r = s.length()-1;
        while(l<r ){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

public:
    string longestPalindrome(string s) {
        int n= s.length();
        int maxiLen=0;

        vector<string> allSubstr;
        for(int i=0;i<n;i++){
            string str="";
            for(int j=i;j<n;j++){
                str += s[j];
                allSubstr.push_back(str);
            }
        }
        string ans="";
        for(int i=0;i<allSubstr.size();i++){
            if(isPalindrome(allSubstr[i])){
                if(allSubstr[i].length() > maxiLen){
                    maxiLen= allSubstr[i].length() ;
                    ans = allSubstr[i];
                }
            }
        }

        return ans;


       
    }

   
};


//============================== dp O(n2) + sp O(n2)==============================

class Solution {
private:
     bool solve(vector<vector<bool>> &dp, int i , int j, string &s ){

         if(i==j) return dp[i][j]= true;
         if(j-i== 1 ){
             if(s[i]==s[j]) return dp[i][j]= true;
             else return dp[i][j]= false;
         }  

         if(s[i]==s[j] && dp[i+1][j-1]== true){
             return dp[i][j] = true;
         }
         return dp[i][j] = false;
        
    }

public:
    string longestPalindrome(string s) {
        int n= s.length();
        int maxiLen=0;
        int startIndex=0;
        
        vector<vector<bool>> dp (n, vector<bool>(n,false));

        for(int i=0;i<n;i++){
            for(int j=i, k=0 ;j<n; j++ ,k++){ // k for diagonal fill up
                if(solve(dp , k, j , s)){
                    if( j-k+1 > maxiLen)
                    {
                        maxiLen= j-k+1;
                        startIndex = k;
                    }
                } 
            }
        }

        return s.substr(startIndex, maxiLen);
        
    }

   
};

