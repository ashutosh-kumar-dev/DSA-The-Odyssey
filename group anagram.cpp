#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<algorithm>
#include<bits/stdc++.h>


using namespace std;


int main(){

/*
    vector<vector<string>> s ;
    string temp;
    for(int i=0;i<6;i++){
            cin>>temp;
        s[i].push_back(temp);
    }
   // getline(cin,s);
   */

    unordered_map<string, vector<string>> m;

    for (int i=0;i<s.size();i++){

        string str=s[i];
        sort(str.begin(),str.end());

        m[str].push_back(s[i]);

    }

    vector<vector<string>> ans;

    for(auto i:m){
        ans.push_back(i.second);
    }

    for(string t: ans) cout<<t;

    ///return ans;


}
