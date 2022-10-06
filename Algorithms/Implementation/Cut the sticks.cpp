#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FO(a,b,c) for(int a=b; a<c; a++)
int main () 
{
    int n;
    cin>>n;
    int a[n], b[1001]={0};
    FO(i,0,n)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    cout<<n<<endl;
    FO(i,1,1000)
    {
        n-=b[i];
        if(b[i] && n)
            cout<<n<<endl;
    }
    return 0;
}