#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{
  int reversed_number = 0, remainder;
  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  return reversed_number;
}
int main()
{
    int count=0;
    int i, j, k;
    cin>>i>>j>>k;
    for(int n=i; n<=j; n++)
    {
        int x=rev(n);
        int d = abs(n-x);
        if(d%k==0)
            count++;
    }
    cout<<count;
    return 0;
}