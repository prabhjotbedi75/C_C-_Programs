#include<bits/stdc++.h>
using namespace std;
void Border(vector<vector<int>> &mat,int m,int n){
    int i,j;
    if(m==1){
        for(j=0;j<n;j++){
            cout<<mat[0][j];
        }
    }
    else if(n==1){
        for(i=0;i<m;i++){
            cout<<mat[i][0];
        }
    }
    else{
    for(j=0;j<n;j++){
        cout<<mat[0][j];      //first row
    }
    for(i=1;i<m;i++){
        cout<<mat[i][n-1];    //last col
    }
    for(j=n-2;j>=0;j--){
        cout<<mat[m-1][j]; //last row
    }
    for(i=m-2;i>0;i--){
        cout<<mat[i][0]; //first col
    }
    }

}
int main(){
    int i,j;
    int m=4;
    int n=3;
    int num=1;
    vector<vector<int>> mat;
    for(i=0;i<m;i++){
        vector<int> v;
        for(j=0;j<n;j++){
            v.push_back(num);
            num++;
        }
        mat.push_back(v);
   }
   Border(mat,m,n);
}