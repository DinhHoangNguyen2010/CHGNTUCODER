///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int lt(int a,int b)
{   if(b==0)
        return 1;
    int t=(lt(a,b/2)%10000*(lt(a,b/2)%10000))%10000;
    if(b%2==0)
        return t;
    return ((t%10000)*(a%10000))%10000;
}
int n,m;
main()
{   ios
    cin>>n>>m;
    cout<<lt(n,m)%10000;
}
