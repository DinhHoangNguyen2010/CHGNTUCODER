///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string s;
int d[vip],n,k;
main()
{   ios
    cin>>s;
    d[0]=1;
    for(int i=1; i<=s.size(); i++)
        d[i]=d[i-1]*2;
    for(int i=0; i<s.size(); i++)
        k+=(s[i]-48)*d[s.size()-i-1];
    cout<<k;
}
