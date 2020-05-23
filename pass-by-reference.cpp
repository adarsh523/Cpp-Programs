#include<iostream>
using namespace std;
class Pet
{
 private:
  int a;
 public:
  Pet(int a=0)//when we call the constructor then it will return the address of the memory loaction created.
  {
   a=0;
   cout<<"constructor is called"<<"\n";
  }
  ~Pet()//this is called when there is no need of object.next statement should be return.this is called by IDE.
  {
   cout<<"destructor is called"<<"\n";
  }
  void display()
  {
   cout<<a<<"\n";
  }
     Pet &assignPets()
     {
      Pet p(10);
      return p;
  }
};

int main()
{
 Pet a(10),b;
 a.display();
 b=a.assignPets();
 b.display();
 return 0;
}
