#include<iostream>
#include<string>
using namespace std;
class pet
{
private:
        string name;
public:
    pet(string tname)
    {
        name=tname;
    }
    friend string getDescription(pet p);
};
string getDescription(pet p)
{
    return "this is : " + p.name;
}
int main()
{
    pet p("big cat");
    cout<<getDescription(p);
    return 0;
}
