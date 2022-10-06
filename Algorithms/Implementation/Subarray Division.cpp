#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,m, count=0, sum;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    cin>>d>>m;
    for(int i=0;i<=n-m;i++)
    {
        sum=0;
        for(int j=i;j<i+m;j++)
            sum+=s[j];
        if(sum==d)
            count++;
    }
    cout<<count<<endl;
    return 0;
}