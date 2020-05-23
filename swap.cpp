#include <iostream>
using namespace std;
void swap(int& x, int& y)
{
    int z=x;
    x=y;
    y=z;
}
int main()
{
    int Account1=5000,Account2=6000;
    cout<<"Before Swap\n";
    cout<<"Account 1="<<Account1<<"Account 2="<<Account2<<"\n";
    swap(Account1,Account2);
    cout<<"After Swap with pass by reference\n";
    cout<<"Account 1="<<Account1<<"Account 2="<<Account2<<"\n";
    return 0;
}
