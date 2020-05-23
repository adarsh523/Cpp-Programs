#include<iostream>
using namespace std;
int main()
{
    int a;
    int &ref=a; //independent reference
    int b=19;
    ref=b;
    cout<<a<<" "<<ref<<"\n";
    ref--;
    cout<<a<<" "<<ref<<" "<<b<<"\n";
    return 0;
    /*here no value is assigned to a,then we are making a reference point to position of a,afterwards we assign a value of 19
    to b and store it in the reference so a now also has the same value of 19.so when the value of ref is changed,value of a will
    change and not b*/
}
