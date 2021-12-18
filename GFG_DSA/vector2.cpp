#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    int m=3;
    int n=2;
    vector<vector<int>>arr;
    for(i=0;i<m;i++){
        vector<int>v;
        for(j=0;j<n;j++){
            v.push_back(6);
        }
        arr.push_back(v);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }
    
}