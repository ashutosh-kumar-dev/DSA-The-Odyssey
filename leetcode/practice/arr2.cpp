#include<iostream>
using namespace std;

int main(){


    int arr[6]={56,32,5,4,4,6};

    int j=6-1;
    int temp=0;
    for(int i=0;i<j;i++){
            j=j-i;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;



    }
    cout<<endl;

    for(int i=0;i<=5;i++) cout<<arr[i]<<ends;

}
