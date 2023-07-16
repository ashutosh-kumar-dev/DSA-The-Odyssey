#include<iostream>
using namespace std;

int main(){

        char *arr="leeeteode";

        int c=1;
        int maxi=0;

        for(int i=0;i<13;i++){

            if(arr[i]!=arr[i+1]){ // if diff then first count ko store karo and set c=1 for restart

                if(maxi<=c){
                    maxi=c;
                    c=1;
                }

            }
            else if(arr[i]==arr[i+1]) c++; //agar same h to count it.
        }
        cout<<maxi;



}
