#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, len=0, max_len;
    cin>>n;
    vector<int> a;
    for(int i=0; i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    int s = a.size();
    for(int i=0; i<s; i++)
    {
        for(int j=s-1; j>=0; j--)
        {
            if(a[j]-a[i] <= 1)
            {
                max_len = j-i+1; 
                if(max_len>len)
                    len = max_len;
            }    
        }
    }
    cout<<len;
    return 0;
}