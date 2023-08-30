#include<iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;

    int x=n,r=0,c=0;

    while(x>0){
        r=x%10;
        if(r!=0 && x%r==0) c++;
        x/=10;
    }
    cout<<c;
}
