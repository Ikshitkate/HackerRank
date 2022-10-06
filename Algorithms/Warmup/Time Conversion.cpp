#include <bits/stdc++.h>
using namespace std;
int number(char a, char b)
{
    int num;
    num = 10*(int)(a-'0') + (int)(b-'0');
    return num; 
}
int main()
{
    char t[10];
    cin>>t;
    int i, h;

    h = number(t[0], t[1]);
    
    if(t[8]=='P' && h!=12)
        h+=12;
    if(t[0]=='1' && t[1]=='2' && t[8]=='A')
        cout<<"00";
    else if(h/10==0)
        cout<<"0"<<h;
    else
        cout<<h;
    for (int i = 2; i < 8; i++)    
    {
        cout<<t[i];
    }
    return 0;
}