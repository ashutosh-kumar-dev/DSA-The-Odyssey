#include<iostream>
using namespace std;

int main(){
    int n= 5 ;
    int arr[n]={-1,1,0,-3,3};

    int m=1;
    int m2=1;
    for(int i=0;i<n;i++){
             m=m*arr[i];
            if(arr[i]==0){

                continue;
            }
            m2=m2*arr[i];


    }


    for(int i=0;i<n;i++){
            if(arr[i]==0){
                cout<<m2<<endl;
            }
            else{
        cout<<m/arr[i]<<endl;
            }
    }
}
