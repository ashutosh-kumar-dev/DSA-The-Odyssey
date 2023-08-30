#include<iostream>
using namespace std;

int main(){
    int n=8;
    int arr[n]={5,6,7,8,1,2,3,4};
    int key=3;

    int l=0;
    int h=n-1;
    int mid;

    while(l<h){
        mid=(l+h)/2;

        if(arr[mid]==key){
            cout<<"yes";
            break;
        }

        else if(arr[l]<arr[mid]){
            if(arr[l]<key && key<arr[mid]){
                h=mid-1;

            }
            else l=mid+1;
        }
        else{
            if(arr[h]>key && key>arr[mid]){
                l=mid+1;

            }
            else h=mid-1;
        }

    }

}
