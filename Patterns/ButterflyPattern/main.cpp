#include <iostream>

using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter the no of rows:"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
                cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
        cout<<"*";
        }
        cout<<"\n";
    }
    for(i=n;i>=1;i--){
        for(j=1;j<=i;j++){
                cout<<"*";
        }
        int space=2*n-2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
        cout<<"*";
        }
        cout<<"\n";
    }
}
