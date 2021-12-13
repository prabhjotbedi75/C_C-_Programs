#include<iostream>

using namespace std;

int main(){
    int n;
    long long  sum;
    int i;
    cout<<"Enter the Size of array"<<endl;
    cin>>n;
    long long  a[n];
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum = sum + a[i];
    }
    cout<<sum;
    return 0;
}
