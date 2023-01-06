#include<iostream>
#include<cstdio>
#include<conio.h>
//value = (row!)/((column!)*(row-columns)!)
using namespace std;
long int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
        f = f*i;
    return f;
}
int main()
{
    int n,r,c;
    cin>>n;
    for(r=0;r<n;r++)
    {
        for(c=1 ;c<=n-r;c++)
            cout<<" ";
        for(c=0;c<=r;c++)
                cout<<fact(r)/(fact(c)*fact(r-c))<<" ";
        cout<<"\n";
    }
    return 0;
}
