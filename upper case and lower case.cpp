#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    char ch;
    cin>>ch;
    n=ch;
    if(ch>=65 && ch<=90)
    {
        //n=n+32;
        //ch=n;
        ch=ch+32;
        cout<<ch;
    }
    else if(ch>=97 && ch<=122)
    {
//        n=n-32;
//        ch=n;
            ch =ch-32;
        cout<<ch;
    }
    else
        cout<<"you pressed wrong letter";
    return  0;
}
