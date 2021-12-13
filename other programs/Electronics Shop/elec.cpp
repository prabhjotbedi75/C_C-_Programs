#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,b,n,m,result;
    int no=-1;
    cin>>b>>n>>m;
    int k[n];
    int d[m];
    int x[6];
    for(i=0;i<n;i++){
        cin>>k[i];
    }
    for(i=0;i<m;i++){
        cin>>d[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
        result=k[i]+d[j];
        if(result>no && result<=b){
            no=result;
        }
        }
    }
    cout<<no;
}