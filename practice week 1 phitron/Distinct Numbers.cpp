#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,c=1;
    cin>>n;
     vector<int> a;
     a.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
//    int minn;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=i+1;j<n;j++)
//        {
//          if(a[i]>a[j])
//        {
//            minn= a[i];
//            a[i]=a[j];
//            a[j]=minn;
//        }
//        }

//    }
sort(a.begin(),a.end());
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
            c++;
    }
    cout<<c;
}
