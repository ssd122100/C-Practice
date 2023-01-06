#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int std_id;
    int age;
    string f_name;
    string m_name;
    student(string s,int id, int age,string f_name,string m_name)
    {
        name= s;
        std_id=id;
        this->age= age;
        this->f_name= f_name;
        this->m_name =m_name;
    }
    student(string s,int id,int ag)
    {
        name= s;
        std_id= id;
        age=ag;
    }
    student(){} // empty constructor
    void print_information()
    {
        cout<<name<<"\n";
        cout<<std_id<<"\n";
        cout<<age<<"\n";
        cout<<f_name<<"\n";
        cout<<m_name<<"\n";
    }
//    ~student(){// new diye memory allocate korle destructor use korte hoi.
//    cout<<"called destructor\n";
//    print_information();}
};
class rectangle
{
public:
    int width;
    int height;
    int calculate_area()
    {
        return width*height;
    }
    int calculate_perimeter()
    {
        return 2*(width+height);
    }
};
class person
{
    // recursive class
public:
    string name;
    person *father,*mother;
    void print_info()
    {
        cout<<"Name = "<<name<<"\n";
        cout<<"Father's Name = "<<father->name<<"\n";
        cout<<"Mother's Name = "<<mother->name<<"\n";
    }
    person(string name, string f_name,string m_name)
    {
        this->name= name;
        father = new person;
        father->name= f_name;
        mother = new person;
        mother->name = m_name;
    }
    person(){
    father =NULL;
    mother = NULL;
    }// empty constructor to solve the problem of memory allocation
    ~person()
    {
        cout<<"called destructor\n";
        if(father!=NULL)
         delete father;
        if(mother!=NULL)
        delete mother;
    }
};
class private_info
{
private:
    string name;
    int std_id;
    int age;
public:
    void set_info(string s,int id,int ag)
    {
        name =s;
        std_id =id;
        age= ag;
    }
    void print_info()
    {
        cout<<name<<"\n";
        cout<<std_id<<"\n";
        cout<<age<<"\n";
    }
};
class user
{
//private:
protected:
    string name;
    int age;
};
class admin:user
{
private:

 string designation;
public:
    void Set(string s,int ag,string desig)
    {
        name = s;
        age =ag;
        designation = desig;
    }
 void print()
 {
     cout<<name<<"\n";
     cout<<designation<<"\n";
     cout<<age<<"\n";
 }
};
int main()
{
    student s =student("SHUVRO SHANKAR DAS",122100,29,"Shambhu nath das","Mita rani das");
    student s2("A",1,5);
//    s.name = "SHUVRO SHANKAR DAS";
//    s.std_id = 122100;
//    s.age= 29;
//    s.f_name= "Shambhu nath das";
//    s.m_name= "Mita rani das";
    s.print_information();
    s2.print_information();
    student s3;
//    student s2;
//    s2.name = "max das";
//    s2.std_id = 122100;
//    s2.age= 4;
//    s2.f_name= "SSD";
//    s2.m_name= "SSD";
//    s2.print_information();
    rectangle r;
    r.width= 4;
    r.height= 6;
    cout<<r.calculate_area()<<"\n";
    cout<<r.calculate_perimeter()<<"\n";
    person p("A","B","C");
//    p.father = new person;
//    p.mother = new person;
//    p.name = "A";
//    p.father->name="B";
//    p.mother->name = "C";
    p.print_info();
    private_info pi;
    pi.set_info("ssd",100,28);
    pi.print_info();
    admin ad;
    ad.Set("ABCD",35,"MANAGER");
    ad.print();
    return 0;
}
