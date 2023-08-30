#include<iostream>
#include<string>
using namespace std;



int main(){

    string s;
    getline(cin,s);

    int n=s.length()-1;


    char temp,temp2;
    int flag=1;


    for(int i=0, j=n;i<j;i++,j--){

            cout<<i << " "<< j<<endl;

        if(!(s[i]>='A' && s[i]<='Z') && !(s[i]>='a' && s[i]<='z') && !(s[i]>='0' && s[i]<='9')){
               // i++;
                j++;
                continue;
        }
        if(!(s[j]>='A' && s[j]<='Z') && !(s[j]>='a' && s[j]<='z') && !(s[j]>='0' && s[j]<='9')){

            //j--;
            i--;
            continue;
        }

        if(s[i]>='A' && s[i]<='Z'){
            temp=s[i]+32;
            //cout<<temp;

        }
        else if(s[i]>='a' && s[i]<='z'){
            temp=s[i];
        }
        else if(s[i]>='0' && s[i]<='9'){
            temp=s[i];
        }




        if(s[j]>='A' && s[j]<='Z'){
            temp2=s[j]+32;
            cout<<temp2;
        }
        else if(s[j]>='a' && s[j]<='z'){
            temp2=s[j];

        }
        else if(s[j]>='0' && s[j]<='9'){
            temp2=s[j];
        }


        if(temp!=temp2){
            flag=0;
        }
    }
    cout<<flag;



}
