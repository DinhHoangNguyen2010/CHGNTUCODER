///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int n,s;
main()
{   ios
    cin>>n;
    cout<<n<<' ';
    while(n>1)
    {   if(n%2==0)
        {   cout<<n/2<<' ';
            n/=2;
        }
        else
        {   cout<<n*3+1<<' ';
            n=n*3+1;
        }
    }
}
