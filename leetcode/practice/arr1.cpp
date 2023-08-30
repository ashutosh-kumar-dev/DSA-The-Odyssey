#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,5,3,4,8,9};


    int mini=arr[0];
    int maxi=arr[0];


    for(int i=0;i<n;i++){

        if(maxi<=arr[i]){
            maxi=arr[i];
        }
        if(mini>=arr[i]){
            mini=arr[i];
        }
    }
    cout<<"max : "<<maxi<<endl<<"mini : "<<mini;
}
