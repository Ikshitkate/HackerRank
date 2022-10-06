#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x1, v1, x2, v2;
    cin>>x1>>v1>>x2>>v2;
    for (int i = 0; i < 10000; i++)
    {
        x1+=v1;
        x2+=v2;
        if (x1==x2)
        {
            break;
        }
    }
    if (x1==x2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}