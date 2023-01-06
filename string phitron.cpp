#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1= "shuvro shankar";
    string s2= " das.";
    string s3 = s1+s2;
    cout<<s3<<endl;
    cout<<s3[0]<<endl;
    cout<<s3.length()<<"\n";
    cout<<s3.size()<<"\n";
    for(int i=0;i<s3.size();i++)
    {
        s3[i]-= 1;
    }
    cout<<s3<<"\n";
    s2.pop_back();
    cout<<s2<<"\n";
    string str = "abcdefgh";
    //deleting first character using erase function
    str.erase(str.begin()+0);
    cout<<str<<"\n";
     str.erase(str.begin()+2);
    cout<<str<<"\n";

}
