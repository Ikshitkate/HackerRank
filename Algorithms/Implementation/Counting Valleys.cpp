#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m=0;
    cin>>n;
    int count[n]={0};
    char c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
        if(c[i]=='D')
            m--;
        else
            m++;
        count[i]=m;
    }
    for (int i = 0; i < n; i++)
    {
        if(count[i]==-1 && count[i+1]==0 )
            m++;
    }
    cout<<m;
    return 0;
}