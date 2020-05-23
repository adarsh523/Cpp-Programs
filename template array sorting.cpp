//bubble sorting using template
#include<iostream>
using namespace std;
//we can use this for any data type that supports
//comparison operator< and swap works for it
template<class T>
void bubbleSort(T a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
            }
        }
    }
}
//Driver code
int main()
{
    int a[5]={10,50,30,40,20};
    int n=sizeof(a)/sizeof(a[0]);
    double b[5]={10.5,50.5,30.6,40.5,20.0};
    int m=sizeof(b)/sizeof(b[0]);
    //calls template function
    bubbleSort(a,5);
    bubbleSort(b,5);
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Sorted array: ";
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
