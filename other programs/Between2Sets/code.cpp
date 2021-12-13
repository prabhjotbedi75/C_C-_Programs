#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int gcdn(int b[],int m){
    int temp=b[0];
    for(int i=1;i<m;i++){
        temp=gcd(temp,b[i]);
    }
    return temp;

}

int findlcm(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = ((arr[i] * ans) /(gcd(arr[i], ans)));
    return ans;
}

int main(){
    int n,m,i,g,l;
    cin>>n>>m;
    int a[n];
    int b[m];
    for(i=0;i<n;i++){
        cin>>a[i];   
    }
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    g=gcdn(b,m);
     //compute lcm
     if(n==1){
         l=a[0];
     }
     else{ 
    l= findlcm(a,n);
    } 
    int L[g];
    for(int i=1;i<=g;i++){
        L[i]=l*i;
    }
    int c=0;
    for(int i=1;i<=g;i++){
        if(g%L[i]==0){
            c++;
        }
    }
    cout<<c;
}