#include<bits/stdc++.h>
using namespace std;
void print(vector<vector <int>> &arr){
    int i,j;
    for(i=0;i<arr.size();i++){
        for(j=0;j<arr[i].size();j++){
            cout<<arr[i][j];
        }
    }
}
int main(){
    int i,j,m,n;
    m=3;
    n=2;
    vector<vector<int>>arr;
    for(i=0;i<m;i++){
        vector<int>v;
        for(j=0;j<n;j++){
            v.push_back(i);
        }
        arr.push_back(v);
    }
    print(arr);
}