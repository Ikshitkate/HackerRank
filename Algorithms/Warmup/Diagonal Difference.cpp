#include<iostream>
using namespace std;
int main()
{
    int n, s1=0, s2=0;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
                s1+=arr[i][j];
            if((i+j) == (n-1))
                s2+=arr[i][j];
        }
    }
    int d = s1-s2;
    if(d<0)
        d*=(-1);
    cout<<d;
    return 0;
}