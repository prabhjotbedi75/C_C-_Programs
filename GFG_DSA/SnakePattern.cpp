#include<bits/stdc++.h>
using namespace std;

void SnakePattern(vector<vector<int>> &mat ,int m,int n){
    int i,j;
    for(i=0;i<m;i++){
        if(i%2==0){
            for(j=0;j<n;j++){
                cout<<mat[i][j];
            }
            cout<<endl;
        }
        else{
            for(j=n-1;j>=0;j--){
                cout<<mat[i][j];
            }
            cout<<endl;
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
SnakePattern(mat,m,n);
}
