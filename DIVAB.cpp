///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int a,b,l,r;
main()
{   ios
    cin>>l>>r>>a>>b;
    int k=a*b/__gcd(a,b);
    cout<<r/a-(l-1)/a+r/b-(l-1)/b-(r/k-(l-1)/k);
}
