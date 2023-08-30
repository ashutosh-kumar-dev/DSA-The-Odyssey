class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        unordered_map<int,int> map;

        for(int i=0 ; i<arr.size(); i++){

            if(map.find(target-arr[i])==map.end()){
                map[arr[i]]=i;
            }
            else return { map[target-arr[i]],i};

        }

        return {};
        
    }
};