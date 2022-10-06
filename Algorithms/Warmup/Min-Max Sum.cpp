#include<iostream>
using namespace std;
int main()
{
    long arr[5]={0,0,0,0,0}, s[5]={0,0,0,0,0};
    for (int i = 0; i < 5; i++)
        cin>>arr[i];
    s[0] = arr[0]+arr[1]+arr[2]+arr[3];
    s[1] = arr[0]+arr[2]+arr[3]+arr[4];
    s[2] = arr[1]+arr[0]+arr[3]+arr[4];
    s[3] = arr[1]+arr[2]+arr[0]+arr[4];
    s[4] = arr[1]+arr[2]+arr[3]+arr[4];
    long max = s[0];
    for(int i=0; i<5; i++)
    {
        if (max<s[i])
            max=s[i];
    }
    long min = s[0];
    for(int i=0; i<5; i++)
    {
        if (min>s[i])
            min=s[i];
    }
    cout<<min<<" "<<max;
    return 0;
}