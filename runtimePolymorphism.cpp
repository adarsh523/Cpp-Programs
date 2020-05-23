#include<iostream>
using namespace std;
class pet
{
public:
    string getDescription()
    {
        return "this is pet class";
    }
};
class dog:public pet
{
public:
     string getDescription()
    {
        return "this is dog class";
    }
};
void describe(pet &p)
{
    cout<<p.getDescription();
}
int main()
{
    dog d;
    describe (d);
    return 0;
}
