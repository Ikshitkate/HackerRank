#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count=0;
    bool p;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    int b[m];
    for (int i = 0; i < m; i++)
        cin>>b[i];
    int binarySearch(int arr[], int l, int r, int x)
    {
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] == x)
			return m;
		if (arr[m] < x)
			l = m + 1;
		else
			r = m - 1;
	}
	return -1;
}

    int i;
    for(i=1; i<=100; i++)
    {
        p=true;
        for(int j=0; j<n; j++)
        {
            if(i%a[j]!=0)
                p=false;
        }
        for(int k=0; k<m; k++)
        {
            if(b[k]%i!=0)
                p=false;
        }
        if (p)
            count++;
    }
    cout<<count;
    return 0;
}
