#include<iostream>
using namespace std;

int palindrome(string s,int i,int j){

    while(i>=0 && j<s.length() && s[i]==s[j]){
        i--;
        j++;
    }
    return j-i-1;

}

int main(){

    string s;
    cin>>s;

    int maxi=0;
    int starti=0;
    int endi=0;
    for(int i=0;i<s.length();i++){

        int len1=palindrome(s,i,i);
        int len2=palindrome(s,i,i+1);

        maxi=max(len1,len2);

        if(endi - starti <maxi){
            starti = i- (maxi-1)/2;
            endi = i+ maxi/2;
        }
    }
    cout<<s.substr(starti,endi);


}
