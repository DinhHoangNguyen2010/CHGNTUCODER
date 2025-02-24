#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n;
bool check(int x)
{   int teo=0,candy=n,ti=0;
    while(candy>0)
    {   teo+=min(x,candy);
        candy-=min(x,candy);
        if(candy>=10)
        {   ti+=candy/10;
            candy-=candy/10;
        }
    }
    return teo>=ti;
}
main()
{   ios
    cin>>n;
    int l=1,r=1e18,ans;
    while(l<=r)
    {   int m=(l+r)/2;
        if(check(m))
        {   ans=m;
            r=m-1;
        }
        else
            l=m+1;
    }
    cout<<ans;
}
