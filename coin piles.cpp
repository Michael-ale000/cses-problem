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
    ll n,a,b;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a>>b;
        if((a+b)%3==0){
            if((a<b/2)||b<a/2){
            cout<<"NO"<<endl;}
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
} 