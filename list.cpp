//Challenging Task Coutesy Saarth Bhaiya
#include<iostream>
#include<queue>
using namespace std;
class Account
{
public:
    string name;
    int balance;
    Account()
    {
        name=" ";
        balance=0;
    }
    void input(string tname,int tbalance)
    {
        name=tname;
        balance=tbalance;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};
int main()
{
    int num;
    int takeoutFront(int num ,Account ar[]);
    cout<<"Enter the no. of account holders: ";
    cin>>num;
    Account ar[num];
    string name;
    int balance;
    int i,ans,r=num;
    for(i=num-1;i>=0;i--)
    {
        cout<<"Enter the account holder's name: ";
        cin>>name;
        cout<<"\nEnter the balance amount in the account: ";
        cin>>balance;
        ar[i].input(name,balance);
    }
    cout<<"\nWant to open an account? Enter '1' for 'YES' , '2' for 'NO': ";
    cin>>ans;
    if(ans==1)
    {
        r=takeoutFront(r,ar);
    }
    else
    {
        cout<<"\nThank you for your time";
    }
    return 0;
}
int takeoutFront(int num ,Account ar[])
{
    ar[0].display();
    for(int i=1;i<num;i++)
    {
        ar[i-1]=ar[i];
    }
    return num-1;
}
