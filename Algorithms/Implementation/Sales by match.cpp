#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n], count=0;
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    count++;
                    arr[j]=0;
                    break;
                }
            }
        }
    }
    cout<<count;
    return 0;
}