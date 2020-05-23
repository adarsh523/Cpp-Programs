#include<iostream>
using namespace std;
int main()
{
    int i,j,k,r,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=n-1;k>=i;k--)
        {
            cout<<" ";
        }
        for(j=1;j<i;j++)

        {
            cout<<j;
        }
        for(r=i;r>=1;r--)
        {
            cout<<r;
        }
        cout<<"\n";
    }
    return 0;
}
