#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m,s;
        cin>>n>>m>>s;
        int result =0;
        result=(m+s-1)%n;
        if(result==0){
         result=n;
         cout<<result<<endl;
        }
        else{
       cout<<result<<endl;
        }
    }
}
