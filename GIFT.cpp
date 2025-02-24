#include<bits/stdc++.h>
#define int long long
#define vip 1000005
#define mod 1000000007
using namespace std;
int n,k,a[vip];
bool check(int m)
{   int s=0;
    for(int i=1; i<=n; i++)
    {   s+=(a[i]+m-1)/m;
        if(s>k)
            return 0;
    }
    return 1;
}
main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>k>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int l=0,r=1e18,ans;
    while(l<=r)
    {   int m=(l+r)/2;
        if(check(m))
        {   r=m-1;
            ans=m;
        }
        else
            l=m+1;
    }
    cout<<ans;
}

