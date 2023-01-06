// abcd = a^n+b^n+c^n+d^n then it is called armstrong number
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int number,n=0,sum=0,rem,power=1;
    cin>>number;
    int x= number;
    while(number>0)
    {
        number/=10;
        n++;
    }
    int y=x;
    while(x>0)
    {
        rem= x%10;
        for(int j=1;j<=n;j++)
        {
            power*=rem;
            //cout<<power<<" ";
        }
        sum+= power;
        power=1;
        //cout<<"sum is "<<sum<<" ";
        x=x/10;
    }
    cout<<"sum and original number == "<<sum<<" "<<y<<"\n";
    if(sum==y)
        cout<<"number is a armstrong";
    else
        cout<<"number is not a armstrong";
    return 0;
}
