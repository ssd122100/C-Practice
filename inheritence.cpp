#include<bits/stdc++.h>
using namespace std;

class Employee
{
private:
    string company;
    int age;
protected:  // developer class also access this if access modifier is protected
    string name;

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
        cout<<"I AM "<<age<<" YEARS OLD"<<"\n";}
Employee(string name, string company, int age){
this->name = name;
this-> company = company;
this -> age = age;
}
};
class developer:public Employee{
public:
    string programmingLanguage;
developer(string name, string company, int age, string programmingLanguage)
   :Employee(name,company,age)
   {
       this->programmingLanguage= programmingLanguage;
   }
   void bugfix()
   {
       cout<< name<< " fixes bug using "<< programmingLanguage<<"\n";
   }

};
class teacher:public Employee{
public:
string subject;
void preparedLesson()
{
    cout<<name<< " is preparing "<< subject<< "lesson"<< endl;
}
teacher(string name, string company, int age, string subject): Employee(name,company,age){subject= subject;}
};
int main()
{
//    Employee employee1= Employee("shurvo","npcbl",28);
//    employee1.introduceEmployee();
//    employee1.setage(30);
//    employee1.setcompany("microsoft");
//    employee1.introduceEmployee();
    developer d = developer("shuvro","npcbl", 28,"c++");
    d.bugfix();
    teacher t = teacher("jack","cool school",35, "physics");
    t.preparedLesson();
    t.introduceEmployee();
    return 0;
}
