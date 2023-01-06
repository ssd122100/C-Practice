#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,len=0;
    int a[100];

    cin>>n;
    while(n)
    {
        int rem= n%2;
        // n= n-rem;
        a[len]=rem;
        len++;
        n/=2;
    }
    for(int i=len-1; i>=0; i--)
    {
        cout<<a[i];
    }
    cout<<"\n";
    int sum=0;
    int p=0;
    for(int i=len-1; i>=0; i--)
    {
        sum+=a[p]*pow(2,p);
        p++;
    }
    cout<<sum<<endl;
}
