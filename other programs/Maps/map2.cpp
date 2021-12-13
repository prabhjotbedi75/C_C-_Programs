#include<bits/stdc++.h>
using namespace std;
int main(){
    int c;
    string s;
    cin>>s;
    map<char,int>freq;
    for (auto c: s){
        freq[c]=freq[c]+1;
    }
    for(auto x : freq){
        if(x.second % 2!=0){
            c++;
        }
    }
    if(c>1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}