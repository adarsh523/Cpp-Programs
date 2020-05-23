#include<iostream>
using namespace std;
double sum(double,double);
double diff(double,double);
double mult(double,double);
double div(double,double);
int main()
{
    double a,b,c,d;int ch;
    cout<<"enter the two numbers and choice\n";
    cin>>a;"\n";
    cin>>b;"\n";
    cin>>ch;"\n";
    switch(ch)
    {
        case(1):c=sum(a,b);cout<<c;break;
        case(2):c=diff(a,b);cout<<c;break;
        case(3):c=mult(a,b);cout<<c;break;
        case(4):d=div(a,b);cout<<d;break;
        default:cout<<"wrong input";
    }
    return 0;
}
double sum(double a,double b)
{
    return a+b;
}
double diff(double a,double b)
{
    return a-b;
}
double mult(double a,double b)
{
    return a*b;
}
double div(double a,double b)
{
    return a/(1.0*b);
}
