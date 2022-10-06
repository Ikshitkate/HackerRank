#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin>>n>>p;
    int a = p/2, b = n/2-p/2;
    int res = (a < b) ? a : b;
    cout<<res;
    return 0;
}