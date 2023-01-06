#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f*=i;
    return f;
}
int main()
{
    string s;
    char ch;
    cin>>s;
    int arr[26];
    for(int i=0;i<26;i++)
        arr[i]=0;
    int i,j,f=1;
    for(i=0;i<s.size();i++)
    {
       j= s[i]-97;
       arr[j]++;
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
           ch= i+97;
           f*= fact(arr[i]);
           //cout<<ch<<" "<< arr[i]<<"\n";
        }
    }
    // combination
cout<<fact(s.size())/f<<endl;
    return 0;
}
