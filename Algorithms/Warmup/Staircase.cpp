#include<iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        for(j=1; j<=n-i; j++)
            cout<<" ";
        for(k=j; k<=n; k++)
            cout<<"#";
        cout<<endl;
    }
    return 0;
}