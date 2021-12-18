#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[26]={0};
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
       if(s[i]>='a' && s[i]<='z')
       {
           a[s[i]-'a']++;
       }
       if(s[i]>='A' && s[i]<='Z')
       {
           a[s[i]-'A']++;
       }

    }
    for(int i=0;i<26;i++)
    {
        if(a[i]>0)
        {
            cout<<(char)(i+'a')<<" "<<a[i]<<endl;
        }
    }

}
