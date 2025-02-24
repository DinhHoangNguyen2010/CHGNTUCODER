///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,m,a[vip],d[vip],t,x;
main()
{   ios
    cin>>n;
    for(int i=1; i<=n; i++)
    {   cin>>a[i];
        if(i>1)
            d[i]=d[i-1]+a[i];
        else
            d[1]=a[1];
    }
    cin>>t;
    while(t--)
    {   cin>>x;
        int pos=lower_bound(d+1,d+n+1,x)-d;
        if(pos>n)
            pos--;
        cout<<pos<<' ';
    }
}
