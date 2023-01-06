#include<iostream>
#include<string>
using namespace std;  // ascii of 0 =48 1=49
int main()
{
    string s;
    cin>>s;
    int a,b;
    a= s[0]-48;
    b= s[2]-48;
    cout<<a*b;
    return 0;
}
