
#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,1,3,4};

    int x=1;
    int c=0;
    int index;

    for(int i=0;i<5;i++){
        if(arr[i]==x){
            if(c==0){  /** catching first occurence and printing there */
                index=i;
                cout<<index;
                c++;  /**blocking the first index entry */
            }
            else{
                index=i; /**this will catch the latest index */
            }
        }
    }
    cout<<endl;
    cout<<index;

}
