#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int > arr={-1,0,1,2,-1,-4};

    set<vector<int>> s;

    sort(arr.begin(),arr.end());
    int i=0;
    int j=arr.size()-1;
    int g_sum=0;

    while(i<j){

        for(int k=i;k<j;k++){ /// koi so no ka diff ka result unhi ke range ke andar ayega
           // if(k==i || k==j) continue;
           // else
            if(arr[i]+arr[j]+arr[k]==0){
                s.insert({arr[i],arr[k],arr[j]});
            }
        }
        if(arr[i]+arr[j]>=g_sum){
            j--;
        }
        else i++;
    }

    ///return s;
    for(auto i:s){
    for(auto j=0;j<i.size();j++){
        cout<<i[j];
    }
    cout<<endl;
   }
}



