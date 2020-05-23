#include<iostream>
using namespace std;
//void swap(int,int);
void swap(int*,int*);
int main()
{
    int A=10;
    int B=20;
    //cout<<A;cout<<"\n";cout<<B;cout<<"\n";
    cout<<A;cout<<"\n";cout<<B;cout<<"\n";
    //swap(A,B);
    swap(A,B);
    return 0;
}
//void swap(int A,int B)
//{
  // cout<<A;cout<<"\n";cout<<B;
//}
void swap(int *A,int *B)
{
   cout<<A;cout<<"\n";cout<<B;
}
