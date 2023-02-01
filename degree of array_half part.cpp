#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    int arr[]={1,2,5,4,2,6,5,4,8,5,2,14,3,2,45,4};
    int n= sizeof(arr)/sizeof(arr[0]);

    sort(arr,arr+n);

    int maxi=0;
    int c=1;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]) c++;
        else c=1;

        if(maxi<=c){
            maxi=c;

        }
    }
    cout<<maxi;

}
