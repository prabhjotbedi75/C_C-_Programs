#include <bits/stdc++.h>

using namespace std;

int main(){
int n,max,ans;
cin>>n;
int a[n];
int h[6]={0};
for(int i=0;i<n;i++){
    cin>>a[i];
    h[a[i]]++;
}
max=h[1];
for(int i=2;i<6;i++){
    if(max<h[i]){
        max=h[i];
        ans=i;
    }
}
    cout<<ans;
}
