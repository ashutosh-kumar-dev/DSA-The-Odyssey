#include<iostream>
#include<vector>

using namespace std;

int palindrome(string s,int i,int j){

    int c=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){

        c++;
        i--;
        j++;
    }

    return c;


}

int main(){

    string s;
    cin>>s;

    int c1=0,c2=0,sum=0;
    for(int i=0;i<s.length();i++){
        c1=palindrome(s,i,i);
                                    //cout<<c1<<" c1"<<endl;
        c2=palindrome(s,i,i+1);
                                    //cout<<c2<<" c2"<<endl;
        sum=sum+c1+c2;
    }
    cout<<sum;

}
