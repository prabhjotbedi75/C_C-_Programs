#include <bits/stdc++.h>
using namespace std;
int main(){
    int l;
    cin>>l;
    for(int x=0;x<l;x++){
    int n,k,i;
    cin>>n>>k;
    int a[n];
    int c=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]<=0){
            c++;
        }
    }
    if(c>=k){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    }
}