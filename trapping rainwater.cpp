#include<iostream>
#include<algorithm>


using namespace std;

int main(){
    int n=12;
    int arr[n]={0,1,0,2,1,0,1,3,2,1,2,1};

    int left[n];
    left[0]=arr[0];

    for(int i=1;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }

    int right[n];
    right[n-1]=arr[n-1];

    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }

    int ans=0;
    for(int i=0;i<n;i++){
        ans+=min(right[i],left[i])-arr[i];

}
