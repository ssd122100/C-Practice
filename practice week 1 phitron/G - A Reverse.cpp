#include<iostream>
#include<string>
using namespace std;
int main()
{
    int l,r,k=0;
    cin>>l>>r;
    string s;
    cin>>s;
    char ch;
    for(int i=l-1;i<=(r-1+l-1)/2;i++)
    {
       ch = s[i];
       s[i] = s[r-1-k];
       s[r-1-k] = ch;
       k++;
    }
    cout<<s;
}
