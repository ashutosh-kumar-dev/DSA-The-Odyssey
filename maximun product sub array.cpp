#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){

    int n=3;
    int arr[n]={-2,0,-1};

    int maxi=0;
    int otherMax=INT_MIN;
    int c=0;//for counting all (-ve,0) values
    int p=1;

    for(int i=0;i<n;i++){
        p=p*arr[i];
        if(arr[i]<=0){
            c++;
            if(arr[i]>otherMax){
                otherMax=arr[i];

            }
            p=1;
        }
        maxi=max(maxi,p);
    }
    if(c==n){
        cout<<otherMax;
    }
    else{
    cout<<maxi;
    }


}
