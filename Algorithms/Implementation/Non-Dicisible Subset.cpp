#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, a, max=0;
    cin>>n>>k;
    int b[k] = {0};
    for(int i=0; i<n; i++)
    {
        cin>>a;
        b[a%k]++;
    }
    for(int i=0; i<=k/2; i++)
    {
        if(i==0)
        {if(b[i]) max++;}
        else if(i==k-i)
        {if(b[i]) max++;}        
        else{
            if(b[i]>b[k-i])
                max+=b[i];
            else
                max+=b[k-i];
        }
    }
    cout<<max;
    return 0;
}