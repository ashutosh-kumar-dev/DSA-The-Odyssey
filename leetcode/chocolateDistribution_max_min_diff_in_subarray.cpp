#include<iostream>
#include<algorithm>
#include<limits.h>

using namespace std;

int main(){

        int n=7;
        int arr[n]={7,3,2,4,9,12,56};

        int m=3;
        int mini=INT_MAX;
        int diff=0;

        sort(arr,arr+7-1);

        for(int i=0;i<n-m+1;i++){

            diff=abs(arr[i]-arr[i+m-1]);// here all elments are -ve so we have to get +ve diff

            if(mini>=diff){
                mini=diff;
            }

        }
        cout<<mini;




}

