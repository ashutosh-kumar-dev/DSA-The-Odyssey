#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int > arr={7,1,5,3,6,4};

    //vector<int > arr={7,6,4,3,1};

    int n=arr.size();
    int mini=arr[0];
    int miniIndex=0;

    for(int i=0;i<n;i++){
        if(mini>=arr.at(i)){
            mini=arr.at(i);
            miniIndex= i;
        }
    }
    //cout<<miniIndex;


    int maxi=arr[miniIndex];
    for(int j=miniIndex;j<n;j++){
        if(maxi<=arr.at(j)){
            maxi=arr.at(j);

        }
    }
    //cout<<mini;

    if(mini==maxi) cout<<0;
    else cout<<maxi-mini;


}
