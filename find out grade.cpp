#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks;
    cin>>marks;
    if(marks>=80)
        cout<<"your grade is A+";
    else if(marks>=70)
        cout<<"Your grade is A";
    else if(marks>=60)
        cout<<"Your grade is A-";
    else if(marks>=50)
        cout<<"Your grade is B";
    else if(marks>=40)
        cout<<"Your grade is C";
    else if(marks>=33)
        cout<<"Your grade is D";
    else
        cout<<"you haven't passed the exam";
        getch();
    return 0;

}
