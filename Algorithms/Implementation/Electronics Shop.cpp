#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,n,m, t=-1, z=0;
    cin>>b>>n>>m;
    vector<int> key(n);
    for(int i=0; i<n; i++)
        cin>>key[i];
    vector<int> usb(m);
    for(int j=0; j<m; j++)
        cin>>usb[j];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            z=key[i]+usb[j];
            if(z>t && z<=b)
                t=z;
        }
    }
    cout<<t;
    return 0;
}