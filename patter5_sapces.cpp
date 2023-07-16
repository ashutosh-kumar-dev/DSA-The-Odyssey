/**

    *
   **
  ***
 ****
*****

*/

#include<iostream>
using namespace std;



int main(){

        int space_size=(5-1);
        for(int x=1;x<=5;x++){
            for(int s=space_size;s>0;s--){
                cout<<" ";
            }
            for(int y=1;y<=x;y++){
                cout<<"*";
            }
            cout<<endl;
            space_size-=1;
        }

}

