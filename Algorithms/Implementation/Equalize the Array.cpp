#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> a(101,0);
    for(int i=0; i<n; i++)
    { int x; cin>>x; a[x]++;}
    int x = *max_element(a.begin(), a.end());
    cout<<n-x;
    return 0;
}