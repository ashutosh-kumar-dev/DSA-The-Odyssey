#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int > arr={2,4,1,7,5,3};

    int n=arr.size();
    int i,j;

    for(i=n-2;i>=0;i--){

        if(arr[i]<arr[i+1])
            break;
    }

    if(i<0) reverse(arr.begin(),arr.end());

    else{

        for(j=n-1;j>i;j--){
            if(arr[j]>arr[i])
                break;
        }

        swap(arr[j],arr[i]);
        reverse(arr.begin()+i+1,arr.end());
    }


    /***** printing ***/

    for(int i: arr) cout<<i<<" ";



}
