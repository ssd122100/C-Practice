#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    v.resize(n);
    for(int i=0;i<v.size();i++)
        v[i]= rand()%100;

    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
        cout<<"\n";
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
        cout<<"\n";
        //sort(v.begin(),v.end());
        sort(v.begin()+1,v.begin()+3+1);  // 1 besi nei end
     for(int i=0;i<v.size();i++)
        cout<<v[i]<<"\t";
        return 0;
}
