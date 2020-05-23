#include<iostream>
using namespace std;
int main()
{
    int n,note=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int box=0;
        for(int j=1;j<=i;j++)
        {
        if(i%j==0)
        {
            box++;
        }
        }
        if(box==2)
        {
            note++;
            cout<<i<<"\n";
        }
    }
    cout<<note;
    return 0;
}

