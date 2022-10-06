#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, q, x;
    cin>>n>>k>>q;
    vector<int> a;
    vector<int> queries;
    for(int i=0; i<n; i++){int z; cin>>z; a.push_back(z);}
    k%=n;
    for(int i=0; i<q; i++)
    {
        cin>>x;
        cout<<a[(n-k+x)%n]<<endl;
    }
    return 0;
}