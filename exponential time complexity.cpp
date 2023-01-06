#include<bits/stdc++.h>
using namespace std;    // time complexity 2^n;
int c=0;

int fibbo(int x)
{
    //int c=0;
    if(x==0)
        return 0;
    if(x==1)
        return 1;

    int a= fibbo(x-1);
    c++;
    int b= fibbo(x-2);
    c++;
    return a+b;
}
int main()
{
    int n;
    cin>>n;
    int f= fibbo(n);
    cout<<f<<" ";
    cout<< endl;
    cout<< c<< "\n";
    return 0;
}
