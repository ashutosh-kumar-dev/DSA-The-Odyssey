//================ diagonal filling dp====================

class Solution{
    public:
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
        int n= str.length();
        int mod= 1e9+7;
        vector<vector<long long >> t(n,vector<long long>(n));
       
       for(int i=0;i<n ;i++){
           for(int j=i , k=0; j<n ;j++,k++){
               if(k==j)  t[k][j]= 1;
               if(j-k == 1){
                   if(str[k]==str[j])
                        t[k][j] = 3;
                    else t[k][j] = 2;
               }
               if(j-k>=2){
                   if(str[k]==str[j]){
                       t[k][j] = (1 + t[k+1][j] + t[k][j-1])%mod;
                   }
                   else t[k][j] = ((t[k+1][j] + t[k][j-1] - t[k+1][j-1]) %mod +mod)%mod;
               }
           }
       }
       return t[0][n-1];
       
       
       
    }
     
};