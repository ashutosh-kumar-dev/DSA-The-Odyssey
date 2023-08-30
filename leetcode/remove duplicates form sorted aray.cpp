#include<iostream>
using namespace std;
/// this is n^2
/// use extra space for O(n)

int main()
{
    int n;
    int arr[]={1,2,2,3,4,5,5};

    n=sizeof(arr)/sizeof(arr[0]);


    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
        {

            for(int j=i;j<n-1;j++){
                arr[j+1]=arr[j+2];
            }
            n=n-1;
        }
    }

    ///printing
    cout<<n<<endl;

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";


}

