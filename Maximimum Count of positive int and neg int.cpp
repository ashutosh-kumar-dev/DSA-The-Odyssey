//binary search dwara last -->> -ve || first --->> +ve index find karo
// to wo index waha tak ka ya waha se baad tk ka total integer dega -ve || +ve resp.
/*********not working in 0 element cases***/
/***       int arr[n]={60,13245,0,0}     ;*/
#include<iostream>
using namespace std;
int main(){
        int n=4;
        //int arr[n]={-1,-2,-3,-4,-5,-6,7,8,9,10,11};
        //int arr[n]={-3,-2,-1,0,0,1,2};
        //int arr[n]={60,13245,0,0};


        int low=0;
        int high=11-1;
        int mid;

        while((high-low)!=1){
            mid=(low+high)/2;

            if(arr[mid]>0){
                high=mid;
            }
            else low=mid;
        }
        cout<<mid<<endl;

/*********here finding total neg and pos  no***********/

        int neg=0,pos=0;
        if(arr[mid]>0){
            if(arr[low]>0){ /*******this case all +ve {12 ,24 64 78}**/
                pos=n;
                low=0;
            }
            else{           /*****noraml mixed case*/
                neg=mid;
                pos=n-mid;
            }
        }
        else{
            if(arr[high]<0){/*******this case all -ve {-10,-9,-8,-7,-6}**/
                pos=0;
                neg=n;
            }
            else{           /*****noraml mixed case*/
                pos=mid+1;
                pos=n-(mid+1);
            }
        }
/**************checking greatest between them***********************/
        if(pos>neg) cout<<pos;
        else cout<<neg;
        //cout<<neg<<"  "<<pos;


}
