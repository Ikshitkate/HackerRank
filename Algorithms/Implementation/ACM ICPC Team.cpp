#include<iostream>
using namespace std;
int main()
{
    int n, m, p=0, q=0, r=0;
    cin>>n>>m;
    char a[n][m];
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            p=0;
            for(int k=0; k<m; k++)
            {
                if(a[i][k]=='1' || a[j][k]=='1')
                    p++;
            }
            if(q==p)
                r++;
            else if(q<p)
            {
                q=p;
                r=1;
            }
        }
    }
    cout<<q<<endl<<r;
    return 0;
}