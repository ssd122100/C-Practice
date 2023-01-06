#include<iostream>
using namespace std;
int main()
{
    string s;
    //cin>>s;
    getline(cin,s);
    s= s+"das";
    cout<<s.size()<<endl;
    cout<<s<<endl;
    // inserting a character
    s.push_back('1');
   cout<<s<<endl;
   // deleting a character
   s.pop_back();
   cout<<s<<endl;
   cout<<s.capacity()<<endl;
    s.resize(15);
    s.shrink_to_fit();
    cout<<s<<endl;
    cout<<s.capacity()<<endl;
   return 0;
}
