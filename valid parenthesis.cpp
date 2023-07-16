#include<iostream>
#include<stack>
#include<string>

using namespace std;


int main(){
    string s;
    cin>>s;

    stack<char> stk;

    for(int i=0;i<s.length();i++){

    if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
        stk.push(s[i]);
       }
    if(s[i]==')'){
        if(stk.top()!='(') cout<<"not match";
        else if(stk.empty()) cout<<"not match";
        else stk.pop();
       }
    else if(s[i]==']'){
        if(stk.top()!='[') cout<<"not match";
        else if(stk.empty()) cout<<"not match";
        else stk.pop();
       }
    else if(s[i]=='}'){
        if(stk.top()!='{') cout<<"not match";
        else if(stk.empty()) cout<<"not match";
        else stk.pop();
       }
    }

    if(!stk.empty()) cout<< "not match";
    else cout<<"match";


}
