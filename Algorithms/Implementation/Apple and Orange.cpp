#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, a, b, m, n, a1=0, o1=0, c1=0, c2=0;
    cin>>s>>t; //range of sam's house
    cin>>a>>b;  //position of apple and orange tree
    cin>>m>>n;  //number of apples and oranges thrown
    int apples[m], oranges[n];
    for (int i = 0; i < m; i++)
    {    
        cin>>apples[i];
        a1=apples[i] + a;
        if (a1>=s && a1<=t)
            c1++;
    }    
    for (int i = 0; i < n; i++)
    {    
        cin>>oranges[i];
        o1 = oranges[i] + b;
        if (o1>=s && o1<=t)
            c2++;
    }
    cout<<c1<<"\n"<<c2;
    return 0;
}