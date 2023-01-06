#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    string s;
    //cin>>s;
    getline(cin,s);
    int c=1,maxx=0,l;
    l= s.size();
    for(int i=1;i<l;i++)
    {
      if(s[i]!= s[i-1])
      {
          maxx =max(maxx,c);
          c=0;
      }
      c++;
    }
    maxx= max(maxx,c);
    cout<<maxx;
    return 0;
}
