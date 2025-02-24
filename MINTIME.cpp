///Try to do,not try to say
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,k,a[vip];
bool check(int x)
{   int s=0;
    for(int i=1; i<=n; i++)
    {   s+=x/a[i];/// Count how many gifts each machine can wrap
    }
    return s>=k;
}
main()
{   ios
    cin>>k>>n;
    for(int i=1; i<=n; ++i)
        cin>>a[i];
    int l=1,r=1e15,ans;
    while(l<=r)
    {   int m=(l+r)/2;
        if(check(m)) /// If enough gift we try reduce time to make gift 
        {   r=m-1;
            ans=m;
        }
        else
            l=m+1;
    }
    cout<<ans;
}
