#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	long long int n;
	cin>>n;
	long long int sum1=0;
	long long int sum2=0;
	long long int a[n-1];
	for(long int i=0;i<n-1;i++)
	{
		cin>>a[i];
	}
	sum1=(n*(n+1))/2;
	for(long int i=0;i<n-1;i++)
	{
		sum2+=a[i];
	}
	cout<<(sum1-sum2);
	return 0;
}