#include<iostream>
#include<string>
using namespace std;

class Student
{
public:
    string name;
    string prog;

    Student(string n,string p)
    {
        name = n;
        prog = p;
    }
   void updateName(string newName)
    {
        name = newName;
        cout<<newName<<endl;
    }
    string accessName()
    {
        return name;
    }
    void updateprogram(string prog2)
    {
        prog=prog2;
        cout<<prog2<<endl;
    }
    string accessprogram()
    {
        return prog;
    }

};
int main()
{
    Student s1("Harry","CSE");
    cout<<s1.name<<endl;
    s1.updateName("Harry Potter");
    cout<<s1.accessName()<<endl;
    s1.updateprogram("CS");
    cout<<s1.accessprogram()<<endl;
}
