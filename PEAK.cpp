#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[vip];
main()
{   ios
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    a[0]=-1e9;
    a[n+1]=-1e9;
    for(int i=1; i<=n; i++)
        if(a[i]>a[i+1]&&a[i]>a[i-1])
        {   cout<<i-1;
            return 0;
        }
}
