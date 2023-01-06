#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<a <<" "<< b<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    int minn= min(a,b);
    cout<<minn<<endl;
    int maxx= max(a,b);
    cout<<maxx<<endl;
    int c = 43, d= 23;
    int mx= max({a,b,c,d});
    cout<<mx<<endl;
    int mn= min({a,b,c,d});
    cout<<mn<<endl;
    return 0;
}
