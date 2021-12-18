#include<bits/stdc++.h>
using namespace std;

void print(int *arr[],int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}


int main(){
    int m,n,i,j;
    m=3;
    n=2;
    int *arr[m];
    for(i=0;i<m;i++){
        arr[i]=new int[n];
        for(j=0;j<n;j++){
            arr[i][j]=i;
            /*cout<<arr[i][j];*/
        }
    }
     print(arr,m,n);
}