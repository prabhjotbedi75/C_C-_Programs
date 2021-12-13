#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int,string>pmap;
    pmap[1]="asd";
    pmap[2]="cv";
    pmap[3]="bb";
    pmap[4]="qwqe";
    pmap.insert({5,"lol"});
    for(auto i=pmap.begin();i!=pmap.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<"\n";
    }
}