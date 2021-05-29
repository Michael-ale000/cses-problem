#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int fact(int);
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n;
    cin>>n;
    ll zero=0;
    for (ll int i = 5; i <=n; i*=5)//no of zero is determine by 5 
    {
        zero+=n/i;//this is the basic mathmatical trick to get number of occurance of 5 in a factorial
    }
    cout<<zero;
    return 0;
} 