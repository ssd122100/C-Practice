#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int c=1;
    in:
    cout<<n<<" * "<<c<<"="<<n*c<<"\n";
     c++;
    if(c<=10)
        goto in;
        getch();
return 0;
}
