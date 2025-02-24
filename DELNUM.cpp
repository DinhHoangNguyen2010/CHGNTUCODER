///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,a[vip],d[2],s;
main()
{   ios
    cin>>n;
    for(int i=1; i<=n; i++)
    {   cin>>a[i];
        d[a[i]%2]++;
        s+=a[i];
    }
    if(s%2==0)
        cout<<d[0]*(d[0]-1)/2+d[1]*(d[1]-1)/2;
    else
        cout<<d[0]*d[1];
}
