#include<bits/stdc++.h>
using namespace std;
void print(vector<int>arr[],int m){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<arr[i].size();j++){
           cout<<arr[i][j];
        }
    }
}
int main(){
    int i,j,m,n;
    m=3;
    n=2;
    vector<int>arr[m];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr[i].push_back(i);
        }
    }
    print(arr,m);
}