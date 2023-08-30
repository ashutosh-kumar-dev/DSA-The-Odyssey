#include<iostream>
#include<string>

using namespace std;


int main(){
    string s;
    cin>>s;

    string s2;

    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]){
            s2.push_back(s[i]);
        }
    }
    cout<<s2;



}
