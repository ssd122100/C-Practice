#include<bits/stdc++.h>
// 1+1/n+1/n^2+1/n^3+..........+1/n^x
using namespace std;
int main()
{
    int n,x;
    cout<<"enter the value of base(n) and power(x)\n";
    cin>>n>>x;
    double sum=1;
    for(int i=1;i<=x;i++)
    {
       sum+= 1/pow(n,i);
    }
    cout<<sum;
}
