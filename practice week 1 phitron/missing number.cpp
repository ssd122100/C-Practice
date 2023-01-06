#include<iostream>
using namespace std;
int main()
{
   long long int n,num,i,sum=0,d;
    cin>>n;
    for(i=1;i<n;i++)
    {
      cin>>  num;
      sum+=num;
    }
    d= ((n*(n+1))/2  -sum);
    cout<<d<<endl;
}
