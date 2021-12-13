#include <bits/stdc++.h>
using namespace std;

int CountTrailingZero(int n){
    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res + (n/i);
    }
    return res;
}

int main(){
    int n,x;
    cin>>n;
    x=1;
    for(int i=2;i<=n;i++){
        x=x*i;
    }
    cout<<"Factorial Value\t"<<x<<endl;
    cout<<"Trailing Zero's\t"<<CountTrailingZero(n);
}


