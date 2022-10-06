#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[26], count=0;
    for(int i=0; i<26; i++)
        cin>>arr[i];
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        int c = (int)(s[i]-'a');
        if(arr[c]>count)
            count = arr[c];
    }
    int y = s.length();
    cout<<count*y;
    return 0;
}