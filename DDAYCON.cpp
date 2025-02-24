///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,k,a[vip],ans,dem;
main()
{   ios
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int j=1,s=0;
    for(int i=1; i<=n; i++)
    {   while(s+a[j]<=k&&j<=n)/// If sum <=k we increase index j 
        {   ans+=j-i+1;/// Count the number of satisfied sub-segments
            s+=a[j];
            j++;
        }
        s-=a[i];
    }
    cout<<ans;
}
