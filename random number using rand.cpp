#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,k,c=0;
    k= rand();
    //cout<<k;
    in:
    cin>>n;
    c++;
    if(n>k)
        cout<<"your number is greater"<<endl;
    if(n<k)
        cout<<"your number is smaller."<<endl;
    if(n==k)
    {cout<<"both Numbers are same"<<" the number is "<<k<<endl;
    exit(0);
    }
    goto in;
}
