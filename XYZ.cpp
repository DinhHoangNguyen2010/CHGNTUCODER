#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
using namespace std;
int n,a[vip],k;
bool check(int x)
{   int box=1,s=0;/// Use the first box
    for(int i=1; i<=n; i++)
    {   if(a[i]>x)
            return 0;
        if(s+a[i]<=x)
            s+=a[i];
        else
        {   box++;
            s=a[i];
        }
        if(box>k)/// If the boxes we need > the boxes we have , increase capacity
            return 0;
    }
    return 1;
}
main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int l=1,r=1e8,ans;
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