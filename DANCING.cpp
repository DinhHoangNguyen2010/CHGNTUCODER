#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,k,a[vip],ans;
main()
{   cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1; i<=n; i++)
    {   int l=lower_bound(a+i+1,a+n+1,a[i]+k)-a; /// Find the first person with height difference k
        int r=upper_bound(a+i+1,a+n+1,a[i]+k)-a; /// Find the last person with height difference k
        ans+=r-l;
    }
    cout<<ans;
}
