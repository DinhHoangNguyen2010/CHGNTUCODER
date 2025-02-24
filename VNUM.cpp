///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int s,n;
main()
{   ios
    cin>>n;
    for(int i=1; i<=sqrt(n); i++)
    {   if(n%i==0)
            s+=n/i+i;
        if(n==i*i)
            s-=i;
    }
    if(s<n+n)
        cout<<1;
    else
        cout<<0;
}
