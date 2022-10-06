#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main () {
    ll t, count, a, b;
    cin>>t;
    for(ll j=0; j<t; j++)
    {
        cin>>a>>b;
        for(ll i=sqrt(a); i<=sqrt(b); i++)
        {
            if(i*i>=a && i*i<=b)
                count++;
        }
        cout<<count<<endl;
        count=0;
    }
    return 0;
}