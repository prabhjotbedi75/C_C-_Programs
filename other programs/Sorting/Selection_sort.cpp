#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        int min_ind=i;
        for(int j=i+1;j<n-1;j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
            swap(arr[i],arr[min_ind]);
        }
    }

}

    int main(){
        int i,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
        cin>>a[i];
        }
        SelectionSort(a,n);
        for(i=0;i<n;i++){
            cout<<a[i];
        }
    }