#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,maxx,minn,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    maxx= arr[0];
    for(i=1;i<n;i++)
    {
        if (arr[i]>maxx)
            maxx= arr[i];
    }
    cout<<maxx<<endl;
    minn= arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]<minn)
        {
            minn= arr[i];
        }
    }
    cout<<minn<<endl;
    return 0;
}


