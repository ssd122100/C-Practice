#include<bits/stdc++.h>
using namespace std;
string funct(string s)
{
    s.erase(s.begin());
    s.pop_back();
    return s;
}
int main()
{
    string s;
    getline(cin,s);
    string ans = funct(s);
    cout<<s<<"\n";
    cout<<ans<<"\n";
    return 0;
}
