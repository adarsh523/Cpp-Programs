#include<iostream>
using namespace std;
class Pet
{
private:
    int a;
public:
    Pet(int a=0)
    {
        a=0;
        cout<<"constructor is called!"<<"\n";
    }
    ~Pet()
    {
        cout<<"destructor is called!"<<"\n";
    }
};
int main()
{
    Pet a(10);   //explicit call of constructor
    a.~Pet();
    return 0;
}
