#include<bits/stdc++.h>
using namespace std;
void funct(string s)
{
    s.erase(s.begin());
    s.pop_back();
    cout<<"in fuction\n";
    cout<<s<<endl;
}
void funct2(string &s)
{
    s.erase(s.begin());
    s.pop_back();
    cout<<"in fuction2\n";
    cout<<s<<endl;
}

int main()
{
    string s;
    getline(cin,s);
    funct(s);
    cout<<"In main function after calling funct\n";
    cout<<s<<"\n";
    funct2(s);
    cout<<"In main function after calling funct2\n";
    cout<<s<<"\n";
    //cout<<ans<<"\n";
    return 0;
}
