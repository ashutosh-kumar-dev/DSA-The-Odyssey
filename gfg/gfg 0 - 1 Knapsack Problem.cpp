//======================== recursion ====================================

class Solution
{
private:

    int solve(int W, int wt[], int val[], int n){
        
        if(n==0) return 0;
        if(W==0) return 0;
        
        if(wt[n]<= W){
             return max(val[n]+solve(W-wt[n], wt, val , n-1), solve(W,wt,val, n-1)) ;
        }
        else{
            return solve(W,wt, val, n-1);
        }
        
        
        
        
    }

    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        
       return  solve(W, wt, val , n);
      
    }
};

//================================= memoization =========================

class Solution
{
private:


    static int t[1001][1001];
    int solve(int W, int wt[], int val[], int n){
        
        if(n==0) return t[n][W]=0;
        if(W==0) return t[n][W]=0;
        
        
        if(t[n][W] !=-1) return t[n][W];
        
        if(wt[n-1]<= W){
             return t[n][W]= max(val[n-1]+solve(W-wt[n-1], wt, val , n-1), solve(W,wt,val, n-1)) ;
        }
        else{
            return t[n][W]=solve(W,wt, val, n-1);
        }
        
        
        
        
    }

    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        memset(t,-1, sizeof(t));
       return  solve(W, wt, val , n);
      
    }
};

 int Solution::t[1001][1001];

//=============================== dp ==========================

class Solution
{
private:


    static int t[1001][1001];
    int solve( int wt[], int val[], int n, int W){
       
       for(int i=1; i<n+1; i++){
           for(int j=1 ; j<W+1; j++){
               
               if(wt[i-1]<= j){
                   t[i][j] = max(val[i-1] + t[i-1][j-wt[i-1]] , t[i-1][j]);
               }
               else 
                t[i][j] = t[i-1][j];
           }
       }
       return t[n][W];
       
       
    }

    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
      memset(t, 0, sizeof(t));
       return  solve( wt, val , n, W);
      
    }
};

 int Solution::t[1001][1001];

