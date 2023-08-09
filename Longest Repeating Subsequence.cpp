//==================== lcs=========================

class Solution {
	public:
		int LongestRepeatingSubsequence(string s1){
		   
		   string s2 =s1;
		   int n= s1.length();
		   
		   vector<vector<int>> t(n+1,vector<int>(n+1,0));
		   
		   for(int i=1; i<n+1;i++){
		       for(int j=1 ; j<n+1 ; j++){
		           
		           if(s1[i-1]==s2[j-1]  &&  i!=j )  // taking 2nd time repeated common
		                t[i][j] = 1+ t[i-1][j-1];
		           else 
		                t[i][j] = max(t[i-1][j], t[i][j-1] );
		       }
		   }
		   
		   return t[n][n];
		}