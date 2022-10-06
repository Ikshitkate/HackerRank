#include <bits/stdc++.h>
using namespace std;
int main () {
    int t, n, n1;
    cin >>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        int n1=n, count=0;
        while(n!=0)
        {   
            int x = n%10;
            if(x)
                if(n1%x==0)
                    count++;
            n/=10;
        }
        cout<<count<<endl;
    }
    return 0;
}