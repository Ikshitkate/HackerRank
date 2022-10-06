#include <bits/stdc++.h>
using namespace std;
# define ll long long int
int main()
{
    ll n;
    cin>>n;
    ll s[n];
    for(ll i=0; i<n; i++)
        cin>>s[i];
    ll min=s[0];
    ll max=s[0];
    int mi=0, ma=0;
    for(ll i=1; i<n; i++)
    {
        if(s[i]<min)
        {
            min=s[i];
            mi++;
        }
        else if(s[i]>max)
        {
            max=s[i];
            ma++;
        }
    }
    cout<<ma<<" "<<mi;
    return 0;
}