///Try to do,not try to say
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[vip],k;
bool check(int x)
{   int wood=0;
    for(int i=1; i<=n; i++)
    {   wood+=max(0ll,a[i]-x);
    }
    return wood>=k;
}
main()
{   ios
    cin>>n>>k;
    for(int i=1; i<=n; ++i)
        cin>>a[i];
    int l=1,r=1e18,ans;
    while(l<=r)
    {   int m=(l+r)/2;
        if(check(m))
        {   ans=m;
            l=m+1;
        }
        else
            r=m-1;
    }
    cout<<ans;
}
