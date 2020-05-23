#include<iostream>
using namespace std;
class Mammal
{
public:
     string name;
       Mammal()
		{
			name="Mammal";

			cout<<"\nName of the mammal:"<<name;
		}
};
class Human : public Mammal
{
public:
    string name;
       Human()
		{
			name="Human";
		cout<<"\nName of the mammal:"<<name;
		}
};
class Dog : public Mammal
{
public:
    string name;
       Dog()
		{
			name="Dog";
		cout<<"\nName of the mammal:"<<name;
		}
};
class Cat : public Mammal
{
public:
    string name;
       Cat()
		{
			name="Cat";
		cout<<"\nName of the mammal:"<<name;
		}
};
int main()
{
    Human h;
    Dog d;
    Cat c;
    /*h.display();
    d.display();
    c.display();*/
    return 0;
}
