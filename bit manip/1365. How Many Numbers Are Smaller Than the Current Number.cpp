class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        
        int arr[101]={0};
        
        //frequency
        
        for(int i:nums){
            
            arr[i]++;
        }
        
        //cumulative sum of their frequency give how many present before it
        // but we have to see (n-1)th value for nth;
        int s=0;
        for(int i=0;i<101;i++){
            s+=arr[i];
            
            arr[i]=s;
        }
        
        
        vector<int> output;
        for(int i:nums){
            
            if(i==0) output.push_back(0);
            else output.push_back(arr[i-1]); //see (n-1)th value for nth;
        }
        
        return output;
        
        
        
        
    }
};