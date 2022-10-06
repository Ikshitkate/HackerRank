#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p=0, z=0, m=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
            m++;
        else if(arr[i]>0)
            p++;
        else
            z++;
    }
    double plus = (double)p/n;
    double minus = (double)m/n;
    double zero = (double)z/n;
    cout<<fixed<<setprecision(6)<< plus<<endl;
    cout<<fixed<<setprecision(6)<< minus<<endl;
    cout<<fixed<<setprecision(6)<< zero<<endl;

    return 0;
}