#include<iostream>
using namespace std;
class Student
{
 public:
  string m_name;
  string &getName();
};
string &Student::getName()
{
 return m_name;
}
int main()
{
 Student stu;
 stu.m_name="jack";
 string name=stu.getName();
 cout<<name<<"\n";
 cout<<stu.m_name<<"\n";
 return 0;
}
