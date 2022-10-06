#include<iostream>
using namespace std;
int main()
{
    int long long n, sum=0;
    cin>>n;
    int long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}