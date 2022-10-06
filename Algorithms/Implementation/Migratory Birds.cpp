#include <bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll n; 
    cin>>n;
    int max=0,k, b[5]={0,0,0,0,0};
    ll ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        k = ar[i];
        b[k-1]++;
    }
    for(int i=0; i<5; i++)
        if(b[max]<b[i])
            max=i;
    cout<<max+1;
    return 0;
}