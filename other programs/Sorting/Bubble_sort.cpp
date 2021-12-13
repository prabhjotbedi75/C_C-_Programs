#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n){
    int swapping=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapping=true;
            }
        }
        if(swapping==false){
                break;
            }
    }

}
int main(){
    int i,n;
    cin>>n;
    int v[n];
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    BubbleSort(v,n);
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}