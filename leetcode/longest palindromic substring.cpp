#include<iostream>
#include<string>
using namespace std;



int main(){
    string s="ccbbd";
    int maxi=0;
    string t_str="";


    for(int i=0;i<s.length();i++){


            /// odd len substrings

            int l=i;
            int r=i;

            while(s[l]==s[r] && l>=0 && r<s.length()){
                    if(maxi<(l-r+1)){

                        t_str=s.substr(l,r+1);
                        maxi=l-r+1;
                    }


                l-=1;
                r+=1;
            }

            /// even len substrings

            l=i;
            r=i+1;


            while(s[l]==s[r] && l>=0 && r<s.length()){
                    if(maxi<l-r+1){

                        t_str=s.substr(l,r+1);
                        maxi=l-r+1;
                    }


                l-=1;
                r+=1;
            }


    }

    cout<<t_str;


}
