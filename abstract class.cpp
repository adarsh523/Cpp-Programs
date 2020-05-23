#include<iostream>
using namespace std;
class Account
{
    public:
    virtual double deposit(double amount) =0;
    virtual void displayBalance() =0;
    virtual void withdraw(double amount) =0;
};
class savingsAccount : public Account
{
private:
    double balance;
public:
    savingsAccount(double balance)
    {
        (*this).balance=balance;
    }
    virtual double deposit(double amount)
    {
        cout<<"this is base deposit"<<"\n";
        balance=balance+amount;
        return balance;
    }
    virtual void displayBalance()
    {
        cout<<"this is base display"<<"\n";
        cout<<balance<<"\n";
    }
    virtual void withdraw(double amount)
    {
        balance=balance-amount;
        cout<<balance<<"\n";
    }
};
class CurrentAccount:public savingsAccount
{
private:
    double balance;
public:
    CurrentAccount(double balance):savingsAccount(0.0)
    {
        (*this).balance=balance;
    }
    virtual double deposit(double amount)
    {
        cout<<"this is derived deposit"<<"\n";
        balance=balance+amount;
        return balance;
    }
    virtual void displayBalance()
    {
        cout<<"this is derived display"<<"\n";
        cout<<balance<<"\n";
    }
    virtual void withdraw(double amount)
    {
        balance=balance-amount;
        cout<<balance<<"\n";
    }
};
void withdrawCommon(Account *bptr,double amount)
{
    double axe;
    cin>>axe;
    bptr->withdraw(axe);
}
int main()
{
    /*savingsAccount *bptr = new savingsAccount(5000.0);
    bptr->displayBalance();                            //for a binder we use -> else we use "." for function calling
    bptr->deposit(100.0);
    bptr->displayBalance();
    bptr = new CurrentAccount(6000.0);
    bptr->displayBalance();
    bptr->deposit(200.0);
    bptr->displayBalance();*/
    int option=1;double axe;
    cout<<"enter 1 for savings account, 2 for current account"<<"\n";
    cin>>option;
    Account *base = NULL;
    if(option==1)
    {
        base = new savingsAccount(5000.0);
        withdrawCommon(base,axe);
    }
    else
    {
        base = new CurrentAccount(6000.0);
        withdrawCommon(base,axe);
    }
    return 0;
}

