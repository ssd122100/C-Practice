#include<iostream>
using namespace std;
void swapping(int &x, int &y)
{
    x= x+y;
    y= x-y;
    x= x-y;
}
int main()
{
    int x,y;
    cin>>x>>y;
    cout<<"x is = "<<x<<" y  is = "<<y<<endl;
    //swap(x,y);
    swapping(x,y);
     cout<<"x is = "<<x<<" y  is = "<<y<<endl;
}
