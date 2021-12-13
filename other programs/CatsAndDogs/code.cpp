#include<bits/stdc++.h>
using namespace std;
int main(){
    int q,x,y,z,a,b;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>x>>y>>z;
        a=abs(z-x);
        b=abs(z-y);
        if(a==b){
            cout<<"Mouse C"<<endl;
        }
        else if(a<b){
            cout<<"Cat A"<<endl;
        }
        else{
            cout<<"Cat B"<<endl;
        }
    }
}