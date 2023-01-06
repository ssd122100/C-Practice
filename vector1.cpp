#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>v;
   int n;
   cin>>n;

   for(int i=0;i<n;i++)
   {
       cout<<" Before push size of vector is = "<<v.size()<<"\n";
       v.push_back(i);
        cout<<" after push size of vector is = "<<v.size()<<"\n";
   }
   v.insert(v.begin()+0,100);
   v.insert(v.begin()+2,300);
   v.insert(v.end(),1000);
   v.erase(v.begin()+1);
   v.pop_back();
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<< " ";
   }
}
