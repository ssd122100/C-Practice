#include<iostream>
#include<conio.h>
#include<cstdio>
using namespace std;
int main()
{
    int n,j=0,t=0;
    scanf("%d",&n);
    int a[n],index[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int num;
    cin>>num;
    for(int i=0;i<n;i++)
    {
        if(a[i]==num)
        {
            index[j]=i;
            j++;
            t++;
        }
    }
    if(t>0)
    {
        printf("number %d is found at the following index\n",num);
        for(int i=0;i<t;i++)
        {
            printf("%d\t",index[i]);
        }
    }
    else
    {
        cout<<"No such number in the list\n";
    }

}
