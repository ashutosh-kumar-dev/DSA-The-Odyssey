#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={1,4,3,2,2};
    int repeat=0;
    //int missing;

    for(int i=0;i<n;i++){
        if((arr[abs(arr[i])-1])<0){
            repeat=abs(arr[i]);
        }
        arr[abs(arr[i]) -1] =-arr[abs(arr[i]) -1];

        //if(arr[i]>0) missing=arr[i];
    }
    cout<<repeat<<" ";

    for(int i=0;i<n;i++){
        if(arr[i]>0){
            cout<<arr[i]; ///missing value
            break;}
    }
    //cout<<repeat<<" " <<missing;

}
