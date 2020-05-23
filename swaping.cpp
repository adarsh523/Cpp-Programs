#include<iostream>
using namespace std;
class Account//In this program we have to swap the objects so this will swap the contents as well.
{
 public:
  int balance;
  Account(int x)
  {
   balance=x;
  }
  void display()
  {
   cout<<balance<<"\n";
  }
};
void swap(Account & s1,Account & s2)
{
 Account z=s2;
 s2=s1;
 s1=z;
}
int main()
{
 Account *s1=new Account(1000);
 Account *s2=new Account(2000);
 cout<<"before swap\n";
 s1->display();
 s2->display();
 swap(*s1,*s2);//as we are passing the binder so we have to write * before the s1 and s2.
 cout<<"after the swapping\n";
 s1->display();
 s2->display();
 return 0;
}
