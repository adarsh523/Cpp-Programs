#include <iostream>
#include <string>
#include <list>
#include <iterator>
using namespace std;
class Student
{
public:
    int cgpa;
    string name;
public:
    Student()
    {
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter CGPA: ";
        cin>>cgpa;
    }
    void display()
    {
        cout<<"Name of student: "<<name;
        cout<<"  CGPA: "<<cgpa;
    }
    bool operator <(const Student & s1) const
{
return cgpa < s1.cgpa;
}
};

void output(list<Student> list1)
{
    list<Student>::iterator it;
    list1.sort();
    for(it = list1.begin(); it != list1.end(); ++it)
        {
            it -> display();
            cout<<endl;
        }
}

int main()
{
   //Student s1;
   list <Student> list1;
   for(int i=0;i<5;i++)
   {
       list1.push_front(Student());
   }
   cout<<endl;
   cout<<"The list is:\n";
   output(list1);
   return 0;
}
