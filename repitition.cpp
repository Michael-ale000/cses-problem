#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s;
	cin>>s;
	int count=1;
	int ans=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]==s[i+1])//for checking in continuous subsequence we can just check its two elements whether they are equal or not//
		{
			count++;
		}
		else
			count=1;
		ans=max(ans,count);
	}
	cout<<ans;
}