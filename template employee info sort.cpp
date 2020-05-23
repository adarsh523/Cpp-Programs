#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
    int idNum;
    string lastName;
    int hireDate;
    int verifyDate(int);
public:
    Employee();
    Employee(int,string,int);
    void displayData();
    void setLastName(string);
    void setIdNum(int);
    void sethireDate(int);
    void setgradePointAverage(double);
    bool operator <(const Employee &rhs)const;

};
bool Employee::operator <(const Employee &rhs)const
{
    return idNum<rhs.idNum;
}
Employee::Employee()
{
    idNum=0;
    lastName=" ";
    hireDate=0;
}
Employee::Employee(int idNum,string lastName,int hireDate)
{
    this->idNum=idNum;
    this->lastName=lastName;
    this->hireDate=hireDate;
}
void Employee::displayData()
{
    cout<<"Employee data:";
    cout<<"\nID:"<<idNum;
    cout<<"\nLast name:"<<lastName;
    cout<<"\nHire date:"<<hireDate;
}
void Employee::setLastName(string lastName)
{
    this->lastName=lastName;
}
void Employee::setIdNum(int idNum)
{
    this->idNum=idNum;
}
void Employee::sethireDate(int hireDate)
{
    this->hireDate=hireDate;
}
void Employee::setgradePointAverage(double grade)
{
    double new_grade;
    new_grade=grade;
}
template <class T>
    void selectionSort(T data[],int n)
    {
       T temp;
       for(int i=0,j,least;i<n;i++)
       {
          for(int j=i+1,least;j<n;j++)
          {
              /*if(data[j]<data[least])
              {
                 least=j;
              }*/
              if(data[i]<data[j])
              {
                 temp=data[i];
                 data[i]=data[j];
                 data[j]=temp;
              }
           }
        }
     }
int main()
{
    Employee e[3];
    e[0].setIdNum(152);
    e[1].setIdNum(132);
    e[2].setIdNum(205);
    e[0].setLastName("Marlen");
    e[1].setLastName("Oleg");
    e[2].setLastName("Test");
    e[0].sethireDate(25061989);
    e[1].sethireDate(30001990);
    e[2].sethireDate(12122012);
    for(int i=0;i<3;i++)
    {
        e[i].displayData();
        cout<<"\n";
    }
    selectionSort(e,3);
    for(int j=0;j<3;j++)
    {
        e[j].displayData();
        cout<<"\n";
    }
    return 0;
}
