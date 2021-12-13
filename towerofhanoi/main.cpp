#include <bits/stdc++.h>

using namespace std;

void towerOfHanoi(int n, char A, char B, char C)
{
    if (n == 1) {
cout << "Move disk 1 from rod " << A << " to rod " << C<<endl;
return;
}
towerOfHanoi(n-1,A,C,B);
cout << "Move disk " << n <<" from rod " << A <<" to rod "<< C << endl;
towerOfHanoi(n-1,B , A , C);
}
int main() {
    int n;
    cout<<"Enter Number of disk's:"<<endl;
    cin>>n;
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}
