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
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {temp = a[i];
            a[i]= a[j];
            a[j]= temp;}
        }
    }
 for(int i=0;i<n;i++)
        cout<<a[i]<< " ";
    cout<<endl;
cout<<"second largest= "<< a[n-2] <<"\n";     // cout<<rand()%100<<" ";
cout<<"second samllest= "<< a[2-1] <<"\n";     // cout<<rand()%100<<" ";
}
