#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,b,n,k;
    cin>>n>>k;
    int bill[n];
    for(i=0;i<n;i++){
        cin>>bill[i];
    }
    cin>>b;
    int avg=0;
    for(i=0;i<n;i++){
        if(i!=k){
            avg=avg+bill[i];
        }
    }
    avg=avg/2;
    if(avg==b){
        cout<<"Bon Appetit";
    }
    else{
        cout<<b-avg;
    }
}
