#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> arr={1,8,6,2,5,4,8,3,7};

    int n=arr.size();

    int l=0;
    int r=n-1;
    int maxi=0;
    while(l<r){
                            ///har 2 particular  bar ke beech me kon sa area max h;
        int width=r-l;
        int area= min(arr[l],arr[r])*width;
        maxi=max(maxi,area);

        if(arr[l]<=arr[r]){
            l++;
        }
        else {
            r--;
        }
    }
    cout<<maxi;


}
