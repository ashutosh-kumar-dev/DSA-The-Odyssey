//================== recursion ==============================


class Solution
{
    private:
    
    int knsack(int W, int wt[], int val[], int n){
        
        if(n==0 || W==0){
            return 0;
        }
        
        if(wt[n-1]<= W){
            
           return max(val[n-1] + knsack(W-wt[n-1],wt,val,n-1) , knsack(W,wt,val,n-1));
        }
        else 
            return knsack(W,wt,val,n-1);
        
    }
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        
        return knsack(W,wt,val,n);
        
       // Your code here
    }
};

//============== memoization =========================

class Solution
{
    
 
    private :
    int knsack(int W, int wt[], int val[], int n, vector<vector<int>> t){
        
        if(n==0 || W==0){
            return t[n][W]=0;
        }
        
        if(t[n][W] != -1){
            return t[n][W];
        }
        
        else {
            if(wt[n-1]<= W){
            
               return t[n][W] = max(val[n-1] + knsack(W-wt[n-1],wt,val,n-1,t) , knsack(W,wt,val,n-1, t));
            }
            else 
                return t[n][W]= knsack(W,wt,val,n-1, t);
        }
        
    }
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        vector<vector<int>> t(n+1,vector<int>(W+1,-1));
        return knsack(W,wt,val,n, t);
        
       // Your code here
    }
};




//============================== top down=========================

class Solution
{
    int t[1001][1001];
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        
        
        memset(t,0,sizeof(t));
        //vector<vector<int>> t(n+1, vector<int>(W+1,0));
        
        for(int i=1;i<n+1; i++){
            for(int j=1; j<W+1 ;j++){
                if(wt[i-1]<=j){
                    
                    t[i][j]= max(val[i-1]+t[i-1][j-wt[i-1]] , t[i-1][j]);
                }
                else t[i][j] = t[i-1][j];
            }
        }
        return t[n][W];
        
        
        
        
       // Your code here
    }
};