#include <iostream>

using namespace std;

int main(){
    int i;
    int n=0;
    int k=0;
    int a[3];
    int b[3];
    int c[2];
    for(i=0;i<3;i++){
        cin>>a[i];
    }
    for(i=0;i<3;i++){
        cin>>b[i];
    }
    c[0]=n;
    c[1]=k;
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            n=n+1;
            c[0]=n;
        }
        else if(a[i]<b[i]){
            k=k+1;
            c[1]=k;
        }
        else{
                //do nothing
        }
    }
    cout<<c[0]<<" "<<c[1]<<endl;
    return 0;
}

