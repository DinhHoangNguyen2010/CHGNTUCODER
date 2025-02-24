#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
using namespace std;
int n,a[vip],k,res=1e9,in=0;
main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {   cin>>a[i];
        a[i]=a[i-1]+a[i];
    }
    for(int i=1; i<=n; i++)
    {   int l=i,r=n,ans;
        while(l<=r)
        {   int m=(l+r)/2;
            if(a[m]-a[i-1]>=k)
            {   r=m-1;
                ans=m;
            }
            else
                l=m+1;
        }
        if(a[ans]-a[i-1]>=k)
        {   if(ans-i+1<res)
                res=min(res,ans-i+1);
        }
    }
    cout<<res;
}
