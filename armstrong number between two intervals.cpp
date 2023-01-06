#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the intervals of number\n";
    cin>>a>>b;
    int maxx,minn;
    if(a>b)
    {
        maxx=a;
        minn=b;
    }
    else
    {
        maxx=b;
        minn=a;
    }
    cout<<maxx<<" "<<minn<<endl;
    for(int i=minn;i<=maxx;i++)
    {
        int c=0, sum=0, rem, p=1;
        int temp, x;
        temp=i;
        while(temp)
        {
            c++;
            temp/=10;
        }
        x=i;
        while(x)
        {
            rem= x%10;
//
//        for(int m=1;m<=digit;m++)
//        {
//            p*=rem;
//        }

        sum=sum+pow(rem,c);
        x/=10;
        }
        if(sum==i)
            cout<<i<<endl;
    }
}
