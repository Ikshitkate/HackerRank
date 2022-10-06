#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int grades[n];
    for (int i = 0; i < n; i++)
    {
        cin>>grades[i];
    }    
    for (int i = 0; i < n; i++)    
    {
        if(grades[i]<38)
            cout<<grades[i]<<endl;
        else if((grades[i]+1)%5==0)
            cout<<grades[i]+1<<endl;    
        else if((grades[i]+2)%5==0)
            cout<<grades[i]+2<<endl;
        else
            cout<<grades[i]<<endl;
    }
    return 0;
}