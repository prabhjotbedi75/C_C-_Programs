#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    int m=3;
    int n=2;
    int *arr[m];
    for(i=0;i<m;i++){
        arr[i]= new int[n];
    }//2d array created

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr[i][j]=10;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cout<<arr[i][j];
        }
    }

}