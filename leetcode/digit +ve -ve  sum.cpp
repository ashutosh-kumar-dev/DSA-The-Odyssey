#include<iostream>

using namespace std;


int main(){

    int n;
    cin>>n;
    int c=1; // c is used for digit count and odd even place for +ve -ve sign;
    int r=0,sum=0;

    while(n>0){
        r=n%10;
        if(c%2==0){
            sum=sum+(-r);
        }
        else{
             sum=sum+(r);
        }
        c++;
        n=n/10;
    }
    if((c-1)%2==0)sum=(-sum); //c is c-1 because we init it by 1 earlier so total digit is increased here.

    else sum=sum;

    cout<<sum;


}
