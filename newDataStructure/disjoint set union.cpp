#include<bits/stdc++.h>
using namespace std;

class DisjointSet {

    vector<int> parent;
    vector<int> rank; // approximation of height under that parent
    vector<int> size; // no of nodes in the component under that parent

public :

    DisjointSet(int n){

        parent.resize(n+1);
        rank.resize(n+1, 0);
        size.resize(n+1, 1);

        for(int i=0; i<=n ;i++){
            parent[i] = i;
        }
    }

    int findUParent(int node){

        if(node == parent[node]){
            return node;
        }

        return parent[node] = findUParent(parent[node]); // compression by storing the ultimate- parent

    }

    void unionByRank(int u, int v){

        int pu = findUParent(u);
        int pv = findUParent(v);

        if( pu == pv) return;

        if( rank[pu] < rank[pv]){
            parent[pu] = pv;
        }
        else if( rank[pu] > rank[pv]){
            parent[pv] = pu;
        }
        else {
            parent[pu] = pv;
            rank[pv] +=1; // the case of same height when one is attached to other the overall component height increased by 1. because one component ulti-parent is under the ulti-parent of other
        }
    }

    void unionBySize(int u, int v){

        int pu = findUParent(u);
        int pv = findUParent(v);

        if(pu == pv) return;

        if(size[pu] < size[pv]){
            parent[pu] = pv;
            size[pv] += size[pu]; // when components are attached then the no of nodes also adds up.
        }
        else if(size[pu] > size[pv]){
            parent[pv] = pu;
            size[pu] += size[pv];
        }
        else {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
    }

};

int main(){

    DisjointSet ds(7);
    /*
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(3,4);

    if(ds.findUParent(2) == ds.findUParent(3)) cout << "same";
    else cout<< "not same";
    */

    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(3,4);

    if(ds.findUParent(2) == ds.findUParent(3)) cout << "same";
    else cout<< "not same";
}
