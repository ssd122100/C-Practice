#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,temp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        a[i]= rand()%100;

     for(int i=0;i<n;i++)
        cout<<a[i]<< " ";
    cout<<endl;
    for(int i=0;i<n/2;i++)
    {
        temp = a[i];
        a[i]= a[n-1-i];
        a[n-1-i]= temp;
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<< " ";
    cout<<endl;
    return 0;
}
