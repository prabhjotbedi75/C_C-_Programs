#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    int m,n;
    m=3,n=2;
    vector<int>arr[m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr[i].push_back(10);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }
}