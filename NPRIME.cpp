///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
bool check(int n)
{   if(n<2)
        return 0;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}
int n;
main()
{   ios
    cin>>n;
    if(check(n)||check(n-1)||check(n+1))
        cout<<"YES";
    else
        cout<<"NO";
}
