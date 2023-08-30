#include<iostream>
using namespace std;


int main(){

    string s;
    cin>>s;

    string t;
    cin>>t;

    int arr[26]={0};
    if(s.length()!=t.length()){
        cout<<"not";
    }

    else{


        for(int i=0;i<=s.length()-1;i++){
                arr[s[i]-'a']++;
                arr[t[i]-'a']--;
                //cout<<arr[t[i]-'a']<<endl;

        }


    bool flag=true;
    for(int i=0;i<s.length();i++ ){
        if(arr[s[i]-'a']!=0){
                cout<<"no";
                flag=false;
                break;
        }

    }
    if(flag) cout<<"yes";

    }


}
