#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char ch;
    cin>>s;
    int arr[26];
    for(int i=0;i<26;i++)
        arr[i]=0;
    int i,j;
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
           cout<<ch<<" "<< arr[i]<<"\n";
        }

    }
    return 0;
}
