#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int lower,upper,sum=0,div;
    cin>>lower>>upper;
    for(int i=lower;i<=upper;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i%j==0)
                sum+=j;
        }
        if(sum==i)
            cout<<i<<endl;
        sum=0;
    }
}
