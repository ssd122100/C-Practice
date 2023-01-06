#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int rem, f=1,bin=0;
    while(n)
    {
        rem= n%2;
        bin= bin+rem*f;
        f*=10;
        n/=2;
    }
    cout<<bin;
    return 0;
}
