#include<iostream>
using namespace std;
class Student
{
	public:
		string name;
		Student()
		{
			name="Abhimanyu";
		}
		void display()
		{
			cout<<"\nName of the Student:"<<name;
		}
};
class lecturer
{
	public:
		string name;
		lecturer()
		{
			name="vimal";
		}
		void display()
		{
		cout<<"\nthe name of lecturer:"<<name;
	    }
};
class ResearchScholar:public Student
{
	public:
		ResearchScholar()
		{
			name="harsha";
		}
		void display()
		{
			cout<<"\n name of the research schoalr:"<<name;
		}
};
int main()
{
	Student s;
	lecturer l;
	ResearchScholar rs;
	s.display();
	l.display();
	rs.display();
}
