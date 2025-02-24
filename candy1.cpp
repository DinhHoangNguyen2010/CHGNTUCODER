///Try to do,not try to say
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,k;
int tinh(int m)
{   int k=n-m;
    int s=k*(k+1)/2;
    return s;
}
main()
{   ios
    cin>>n>>k;
    int l=0,r=n,ans=0;
    while(l<=r)
    {   int m=(l+r)/2;
        if(tinh(m)==k+m)
        {   ans=m;
            break;
        }
        else if(tinh(m)<k+m)
            r=m-1;
        else
            l=m+1;
    }
    cout<<ans;
}

