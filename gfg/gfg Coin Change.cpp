//========================== recursion =================================


class Solution {
   
private: 
    long long int solve(int coins[], int n ,int  sum){
        
        if(n==0) return 0;
        if(sum == 0) return 1;
        
        if(coins[n-1]<= sum) {
            return solve(coins, n, sum - coins[n-1]) + solve(coins , n-1, sum);
        }
        else{
            return solve(coins, n-1, sum);
        }
        
        
        
        
        
    }
public:
         
    long long int count(int coins[], int n, int sum) {
    
       // memset(t,0,sizeof(t));
      
       return solve(coins, n , sum);
       
       
    }
};

//==============================  memoization =============================



class Solution {
    
   
private: 

    static long long int t[1001][1001];
    long long int solve(int coins[], int n ,int  sum){
        
        if(n==0) return t[n][sum]= 0;
        if(sum == 0) return t[n][sum]= 1;
        
        
        if(t[n][sum] !=-1)  return t[n][sum];
        
        if(coins[n-1]<= sum) {
            return t[n][sum]= t[n][sum]= solve(coins, n, sum - coins[n-1]) + solve(coins , n-1, sum);
        }
        else{
            return t[n][sum]= solve(coins, n-1, sum);
        }
        
        
        
        
        
    }
public:
         
    long long int count(int coins[], int n, int sum) {
    
        memset(t,-1,sizeof(t));
      
       return solve(coins, n , sum);
       
       
    }
};
long long int Solution::t[1001][1001];




 //=================================== dp =================
class Solution {

    private:
    
      static long long int t[1001][1001];
    
    long long int solve(int coins[], int n ,int  sum){
        
        for(int i = 0; i<n+1 ; i++){
           for(int j= 0 ; j<sum+1; j++){
               if(i==0) t[i][j] = 0;
               if(j==0) t[i][j] = 1;
           }
       }
       
       
       for(int i = 1; i<n+1; i++){
           for(int j=1 ; j<sum+1; j++){
               
               if(coins[i-1]<= j){
                   t[i][j] =t[i][j - coins[i-1]] + t[i-1][ j];
               }
               else
                t[i][j] = t[i-1][ j];
               
               
           }
       }
       
       return t[n][sum];
       
    }
    
     public:
         
    long long int count(int coins[], int n, int sum) {
    
       // memset(t,0,sizeof(t));
      
       return solve(coins, n , sum);
       
       
    }
};
long long int Solution::t[1001][1001];