#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="aababba";
    int k=1;
    unordered_map<char,int> m;

    int maxl=0;
    int beg=0;


    for(int endi=0;endi<s.length();endi++){
        maxl=max(maxl,++m[s[endi]]);
        if((endi-beg+1-maxl)>k){
            m[s[beg++]]--;
        }
    }
    cout<<s.length()-beg;

}
