#include<bits/stdc++.h>
using namespace std;
int n, k, e, p;
int main()
{
    cin>>n>>k;
    int t[n];
    for(int i=0; i<n; i++) cin>>t[i];
    e=100;
    while(e)
    {
        if(e!=100 && p==0)
            return cout<<e<<endl, 0;
        if(t[p]) e-=2;
        e--; p=(p+k)%n;
    }
    return 0;
}