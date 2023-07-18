


//===============================brute force======================================

class Solution {
public:
    char findKthBit(int n, int k) {
        
    string s="0";
    

    for(int i=0;i<n-1;i++){

        s=s+'1';

        string tmp="";
        for(int j=0;j<s.length()-1;j++){
            if(s[j]=='0') tmp+='1';
            else tmp+='0';
        }

        reverse(tmp.begin(),tmp.end());
       
        s+=tmp;
    }
    return s[k-1];
        
    }
};


//=================================recursion=============================

class Solution {
public:
    char findKthBit(int n, int k) {
   int ans= solve(n,k);

   return ans==0 ? '0' : '1';
        
    }


    int solve(int n, int k){
        
        if(n==1 && k==1) return 0;

        int len = pow(2,n)-1;
        int mid = len/2;

        if(k==mid+1) return 1;

        else if(k<mid+1){
            return solve(n-1,k);
        }
        else {
            return !solve(n-1,len-k+1);
        }
    }


    
};
