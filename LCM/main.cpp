#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

int main(){
    int a,b;
    cout<<"Enter the 2 no's u want gcd of:"<<endl;
    cin>>a>>b;
    cout<<"LCM is:"<<(a*b)/gcd(a,b);
}
