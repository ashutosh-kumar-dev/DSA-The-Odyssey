class Solution {
public:
    bool isOneBitCharacter(vector<int>& arr) {
        
        
        int index=0;
        
        while(index<arr.size()){
            
            if(index==arr.size()-1 and arr[index]==0){
                return true;
                
            }
            
            index=(arr[index]==1)? index+2 : index+1;
            
            
        }
        return false;
        
    }
};