#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,arr[100],pos,num;
    cin>> n;
    for(int i=0;i<n;i++)
        arr[i]= rand()%100;
     for(int i=0;i<n;i++)
       cout<< arr[i]<<"\t";
    cout<<endl;
    cin>>num;
    cin>>pos;
   for(int i=n;i>=pos-1;i--)

   {
       arr[i]= arr[i-1];
   }
   arr[pos-1]= num;
   n++;
   for(int i=0;i<n;i++)
       cout<< arr[i]<<"\t";
return 0;
}
