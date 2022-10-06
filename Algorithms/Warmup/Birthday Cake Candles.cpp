#include<iostream>
using namespace std;
int main()
{
    int long long n;
    cin>>n;
    int long long c[n];
    for(int i=0; i<n; i++)
        cin>>c[i];
    int long long max = c[0];
    for(int i=0; i<n; i++)
    {
        if(max<c[i])
            max=c[i];
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(max==c[i])
            count++;
    }
    cout<<count;
    return 0;
}