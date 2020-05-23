#include<iostream>
#include<conio.h>
using namespace std;
class divideByZeroException
{
   public:
   string info=NULL;
   divideByZeroException()
   {
       info="there is a divide by zero instruction!";
   }
   string toString()
   {
       return info;
   }
};
int divide(int a,int b)
{
    if(b==0)
    {
        //throw new divideByZeroException();
        throw -1;
    }
    else
    {
        return a/b;
    }
}
int main()
{
    int a=10,b=0;
    try
    {
        divide(a,b);
    }catch(int e)
    {
        cout<<"exception is:"<<e;
    }
    return 0;
}
