///Try to do,not try to say
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,m,b[vip],a[vip],ans;
main()
{   ios
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
        cin>>a[i];
    for(int i=1; i<=m; i++)
        cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    int l=1,r=1;
    while(l<=n&&r<=m)
    {   if(a[l]>b[r])
        {   ans++;
            l++;
            r++;
        }
        else
            l++;
    }
    cout<<ans;
}
