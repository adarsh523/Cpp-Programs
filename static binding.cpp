#include<iostream>
using namespace std;
class savingsAccount//centerspace
{
private:
    double balance;
public:
    savingsAccount(double balance)
    {
        (*this).balance=balance;
    }
    double deposit(double amount)
    {
        balance=balance+amount;
        return balance;
    }
    void displayBalance()//camelspace
    {
        cout<<balance<<"\n";
    }
};
int main()
{
    cout<<"hello world"<<endl;
    savingsAccount *bptr = new savingsAccount(5000.0);
    bptr->displayBalance();
    bptr->deposit(100.0);
    bptr->displayBalance();
    return 0;
}
