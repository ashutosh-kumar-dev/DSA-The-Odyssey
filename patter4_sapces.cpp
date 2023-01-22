/**

*****
 ****
  ***
   **
    *
*/

#include<iostream>
using namespace std;



int main(){

        int space_size=0;
        for(int x=5;x>=1;x--){
            for(int s=0;s<space_size;s++){
                cout<<" ";
            }
            for(int y=x;y>=1;y--){
                cout<<"*";
            }
            cout<<endl;
            space_size+=1;
        }

}
