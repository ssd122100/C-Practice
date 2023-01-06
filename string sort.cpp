#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int i,j;
    char ch;
    for(i=0;i<s.length();i++)
    {
        for(j=i+1;j<s.length();j++)
        {
            if(s[i]>s[j])
            {
                ch= s[i];
                s[i]=s[j];
                s[j]=ch;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
