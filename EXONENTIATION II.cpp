#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll mod=1e9+7;
int power(ll a,ll b)
{
    ll ans=1;
    a=a%mod;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans*a)%mod;
            b=b-1;

        }
        a=(a*a)%mod;
        b=b>>1;

    }
    return ans;

}
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
         cout<<power(a,power(b,c))<<endl;
    }
}
