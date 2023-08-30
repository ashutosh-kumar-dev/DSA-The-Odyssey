class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        int i=0;
        int c=0;
        int big = (start>goal)? start : goal;
        
        while((1<<i) <= big){
            if((start & (1<<i)) == (goal & (1<<i))) c=c;
            else c++;
            i++;
        }
        return c;
        
        
    }
};

//=======================M2===============================

class Solution {
public:
    int minBitFlips(int start, int goal) {
        
        string a= bitset<32> (start).to_string();
        string b= bitset<32> (goal).to_string();
        
        int c=0;
        
        for(int i=0;i<32;i++){
            if(a[i]!=b[i]) c++;
        }
        
        
        return c;
        
        
    }
};