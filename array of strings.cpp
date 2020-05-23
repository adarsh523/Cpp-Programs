#include<iostream>
using namespace std;
class student
{
  private:
    string name;
    float cgpa;
  public:
    student()
    {
        cout<<"default constructor"<<"\n"<<endl;
        name="";
        cgpa=0.0;
    }
    student(string name,float cgpa)
    {
        cout<<"parameterized constructor"<<"\n"<<endl;
        setname(name);
        setCGPA(cgpa);
    }
    //void setname(int index,string name)
    void setname(string name)
    {
      (*this).name=name;  //'this' is used to do typecasting
    }
    //void setCGPA(int index,float cgpa)
    void setCGPA(float cgpa)
    {
      (*this).cgpa=cgpa;
    }
    void display()
    {
        cout<<"student name is:"<<name<<"\n";
        cout<<"student CGPA is:"<<cgpa<<"\n";
    }
};
int main()
{
    string tName;
    float tCGPA;
    student s1;
    student s2("Harsha",9.8);
    /*for(int i=0;i<10;i++)
    {
        cout<<"enter student name:"<<"\n"<<endl;
        //cin>>tName;
        s.setname(i,tName);
        cout<<"enter student CGPA:"<<"\n"<,endl;
        //cin>>tCGPA;
        s.setCGPA(i,tCGPA);
    }*/
    s1.display();
    s2.display();
    return 0;
}
