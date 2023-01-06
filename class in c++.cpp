#include<bits/stdc++.h>
using namespace std;
class Employee{
public:  // access modifier (public, private, protected) by default private
    string Name;      //attribute
    string Company;
    int Age;
//public:      // constructor has no return type, same name as the class and should be public.
//    Employee(string name,string company, int age){
//        Name = name;
//        Company = company;
//        Age = age;
//    }
public:
    Employee()
    {
        cout << "Enter the name:";
        cin >> Name;
        cout << "Enter the Company:";
        cin >> Company;
        cout << "Enter the age:";
        cin >> Age;
    }
    void intoduce()   //behaviour
    {
      cout<<"HELLO MY NAME IS "<<Name<<"\n";
      cout<< "I AM WORKING FOR "<<Company<<"\n";
      cout<<"I AM "<<Age<<" YEARS OLD"<<"\n";
    }
    };
int main()
{
   Employee employee1;
//    employee1.Name ="shuvro shankar das";
//    employee1.Company ="NPCBL";
//    employee1.Age =28;
    employee1.intoduce();
   Employee employee2;
//    employee2.Name ="MAX";
//    employee2.Company ="google";
//    employee2.Age =4;
   employee2.intoduce();
return 0;
}
