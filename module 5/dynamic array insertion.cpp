#include<bits/stdc++.h>
using namespace std;
class Array
{
private:
    int * arr;
    int cap;
    int sz;
    void increase_capacity()
    {
        cap = cap*2;
        int *tmp= new int(cap);
        for(int i=0;i<sz;i++)
            tmp[i]= arr[i];
        delete [] arr;
        arr= tmp;
    }
public:
    Array()
    {
        arr = new int [1];
        cap=1;
        sz=0;
    }
    void Push_back(int x)
    {
        if(cap==sz)
         increase_capacity();
        arr[sz]= x;
        sz++;
    }
    void Insert(int x, int pos)
    {
        if(cap==sz)
        {
            increase_capacity();
        }
        for(int i= sz-1; i>= pos;i--)
        {
            arr[i+1]= arr[i];
        }
        arr[pos]= x;
        sz++;
    }
    void Pop_back()
    {
        if(sz==0)
        {
            cout<<"current size is zero\n";
        }
        sz--;
    }
    void Erase(int pos)
    {
        if(pos>=sz)
            {cout<< "position does not exist.\n";
            return ;}
        for(int i = pos+1;i<sz;i++)
            arr[i-1]= arr[i];
        sz--;

    }
    int getSize()
    {
        return sz;
    }
    int getElement(int idx)
    {
        if(idx>=sz)
        {cout<<"Error "<<idx<<" is out of bound!\n";
        return -1;}
        return arr[idx];
    }
    void print()
    {
        for(int i=0;i<sz;i++)
            cout<< arr[i]<< " ";
        cout<<"\n";
    }
};
int main()
{
Array a;
a.Push_back(10);
a.Push_back(20);
a.Push_back(30);
a.Push_back(40);
a.Insert(35,3);
a.Push_back(50);
a.print();
cout<<a.getSize()<<endl;
for(int i=0;i<a.getSize();i++)
    cout<<a.getElement(i)<< "\n";
//a.Pop_back();
a.Erase(3);
a.print();
return 0;
}
