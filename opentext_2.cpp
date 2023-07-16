/***
Write a function:

class Solution { public int solution(int[] A); }

that, given an array A consisting of N integers,
returns the maximum sum of two numbers whose digits add up to an equal sum.
 If there are no two numbers whose digits have an equal sum,
 the function should return -1.

Examples:

1. Given A = [51, 71, 17, 42],
 the function should return 93.
 There are two pairs of numbers whose digits add up to an equal sum:
 (51, 42) and (17, 71). The first pair sums up to 93.

2. Given A = [42, 33, 60],
 the function should return 102.
The digits of all numbers in A add up to the same sum,
 and choosing to add 42 and 60 gives the result 102.

3. Given A = [51, 32, 43],
the function should return -1,
 since all numbers in A have digits that add up to different,
unique sums.

Write an efficient algorithm for the following assumptions:

N is an integer within the range [1..200,000];
each element of array A is an integer within the range [1..1,000,000,000].


*/


#include<bits/stdc++.h>
using namespace std;


int main(){

    unordered_map<int,vector<int>> m;
    vector<int> arr={51, 32, 43};

    for(int i=0;i<arr.size();i++){
        int x=arr[i];
        int r,s=0;
        while(x!=0){
            r=x%10;
            s=s+r;
            x/=10;
        }
        m[s].push_back(arr[i]);

    }
    int maxi=0;
    for(auto i: m){
        if(i.second.size()>1){
        sort(i.second.begin(),i.second.end());
        int a=i.second[i.second.size()-1];
        int b=i.second[i.second.size()-2];
        int sum=a+b;

        if(sum>maxi) maxi=sum;
        }
    }
    if(maxi==0) cout<<-1;
    else cout<<maxi;
    /*
    int maxi=0;
    for(auto i:m){
        if(i.second>maxi) maxi=i.second;
    }
    cout<<maxi;*/
}
