#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    int maxx;
    cin>>a>>b>>c;
    if(a>b)
        maxx=a;
    else
        maxx= b;
    if(c>maxx)
        maxx=c;
    cout<<" maximum between" <<a<<" ,"<<b<<" and "<<c<<" is="<<maxx<<"\n";
    getch();
    return 0;
}
