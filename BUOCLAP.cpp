///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int tcs(int n)
{   int s=0;
    while(n>0)
    {   s+=n%10;
        n/=10;
    }
    return s;
}
int n;
main()
{   ios
    cin>>n;
    int dem=0;
    while(n>10)
    {   n=tcs(n);
        dem++;
    }
    cout<<dem;
}
