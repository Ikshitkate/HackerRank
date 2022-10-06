#include<iostream>
using namespace std;
int main()
{
    int a[3], b[3];
    int s[]={0,0};
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>b[i];
    }
    for(int i=0; i<3; i++)
    {
        if(a[i]<b[i])
            s[1]++;
        else if(a[i]>b[i])
            s[0]++;
    }
    for(int i=0; i<2; i++)
    {
        cout<<s[i]<<" ";
    }
    return 0;
}