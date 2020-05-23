#include<iostream>
using namespace std;
class account
{
public:
    account()
    {}
    virtual void print()
    {
        cout<<"normal account";
    }
};
class savingsAccount:public account
{
public:
    savingsAccount()
    {}
    virtual void print()
    {
        cout<<"savings account";
    }
};
int main()
{
    try
    {
        try
        {
            throw savingsAccount();
        }
        catch(account& a)
        {
            cout<<"caught account a,which is actually";
            a.print();
            cout<<"\n";
            throw;//note:we are now rethrowing the object here
        }
    }
    catch(account& a)
    {
        cout<<"caught account a,which is actually";
        a.print();
        cout<<"\n";
    }
    return 0;
}
