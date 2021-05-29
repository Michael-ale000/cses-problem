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
    ll int sum=(n*(n+1))/2;
    ll ans=sum/2;
    vector<int>a;
    vector<int>b;
    if(sum%2!=0){
    	cout<<"NO";
    }
	else{
		cout<<"YES"<<endl;
		for(int i=n;i>=1;i--)
		{
			if(i<=ans){
				a.push_back(i);
			    ans-=i;
			}
			else{
				b.push_back(i);
			}
		}

	    cout<<a.size()<<endl;
	    for (int i = 0; i < a.size(); ++i)
		{
			cout<<a[i]<<" ";
		}	
        cout<<"\n"<<b.size()<<endl;
        for (int i = 0; i < b.size(); ++i)
        {
    	    cout<<b[i]<<" ";
        }
    return 0;
}
}