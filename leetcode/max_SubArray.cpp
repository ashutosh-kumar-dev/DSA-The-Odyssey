#include<iostream>
#include<vector>
#include<limits.h>

using namespace std;

int main(){

        vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};

        if(arr.size()==0) cout<<"no max --empty";

        else if(arr.size()==1) cout<<arr.at(0);


        int current_max=arr.at(0);
        int final_max=INT_MIN;

        for(int i=0;i<arr.size()-1;i++){
                if(current_max<0) current_max=0;

            current_max=current_max+arr.at(i);
            final_max=max(final_max,current_max);

        }
        cout<<final_max;




}
