#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int arr[5]={2,3,5,4,9};
    int n=5;
    int k=3;

    /*** by bubble sort technique**/

    for(int i=0;i<k;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<arr[n-k]<<endl;

    /** by sorting and finding */
    int arr1[5]={2,3,5,4,9};
    int n1=5;
    int k1=3;

    sort(arr1,arr1+n1-1);
    cout<<arr1[k1-1];

}
