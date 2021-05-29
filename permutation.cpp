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
    if(n==1)
    {
        cout<<"1 ";
    }
    if((n==2)||(n==3)){
        cout<<"NO SOLUTION";
    }
    else{
        for (int i = 2; i <=n; i+=2)
        {
            cout<<i<<" ";
        }
        for (int i = 1; i <=n; i+=2)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}