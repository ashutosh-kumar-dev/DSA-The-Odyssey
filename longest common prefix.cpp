#include<iostream>
#include<string>

using namespace std;


int main(){

    int n;
    cin>>n;
    string s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }


    int mini=n;
    for(int i=0;i<n;i++){
        int j=0;
        while(j<s[0].length() && s[0][j]==s[i][j]) j++;

        mini=min(j,mini);

    }
    cout<<mini;



}
