#include<bits/stdc++.h>
using namespace std;
class Employee
{
private:
    string name;
    string company;
    int age;
public:
    void setname(string name)
    {
        this->name = name;
    }
    string getname()
    {
        return name;
    }
    void setcompany(string company)
    {
        this->company= company;
    }
    string getcompany()
    {
        return company;
    }
    void setage(int age)
    {
        this->age = age;
    }
    int getage()
    {
        return age;
    }
void introduceEmployee(){
        cout<<"HELLO MY NAME IS "<<name<<"\n";
        cout<< "I AM WORKING FOR "<<company<<"\n";
        cout<<"I AM "<<age<<" YEARS OLD"<<"\n";};
Employee(string name, string company, int age){
this->name = name;
this-> company = company;
this -> age = age;
};
};
int main()
{
    Employee employee1= Employee("shurvo","npcbl",28);
    employee1.introduceEmployee();
    employee1.setage(30);
    employee1.setcompany("microsoft");
    employee1.introduceEmployee();
    return 0;
}
