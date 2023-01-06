#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    int minn;
    cin>>a>>b>>c;
    if(a<b)
        minn=a;
    else
        minn =b;
    if(c<minn)
        minn=c;
    cout<<minn;
    getch();
    return 0;
}
