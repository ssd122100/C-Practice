#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,x=1;
    cin>>n;
    int exp;
    cin>>exp;
     for(int j=1;j<=exp;j++)
        {
            x*=n;

        }
         cout<<x<<" ";
}
