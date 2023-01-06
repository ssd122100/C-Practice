#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,x1,x2,real,imaginary, discriminant;
    cout<<"Enter coefficient of a,b and c:\n";
    cin>>a>>b>>c;
    discriminant = b*b-4*a*c;
    if(discriminant>0)
    {
        x1= (-b+sqrt(discriminant))/(2*a);
        x2= (-b-sqrt(discriminant))/(2*a);
        cout<<"roots are "<<x1<<" "<<x2;
    }
   else if(discriminant==0)
    {
        x1= -b/(2*a);
        x2= -b/(2*a);
        cout<<"roots are "<<x1<<" "<<x2;
    }
    else
    {
        real= -b/(2*a);
        imaginary= sqrt(-discriminant)/(2*a);
        cout<<"roots are "<<real <<"+"<<imaginary<<"i"<<" and "<< real<<"-"<<imaginary<<"i";
        }
}
