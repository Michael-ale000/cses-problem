#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
    ll int n;
    cin>>n;
    ll int a[n];
    ll int static moves=0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    for (int i = 1; i < n; ++i)
    {
    	if(a[i-1]>a[i])
    	{
    		moves+=a[i-1]-a[i];
    		a[i]=a[i-1];//do this becoz next element should be increasing 
    	}

    }
    cout<<moves;
    return 0;
}