#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
     int v[100];
     int i,n,f,l,m,num;
     cout<< "enter the number of elements\n";  // f=first l= last m= middle n= number
     cin>>n;
     cout<<"enter the value in ascending order\n";
     for(i=0;i<n;i++)
        cin>>v[i];
   f=0;
l= n-1;
m= (f+l)/2;
cout<<"enter the value of the number you want to search\n";
cin>>num;
while(f<=l)
{
    if(v[m]<num)
        f++;
    else if(v[m]==num)
       {
        cout<<"\nThe number, "<<num<<" found at Position "<<m+1;
            break;
       }
    else
        f--;
    m= (f+l)/2;
}
if(f>l)
        cout<<"\nThe number, "<<num<<" is not found in given Array";
    cout<<endl;
    return 0;
}
