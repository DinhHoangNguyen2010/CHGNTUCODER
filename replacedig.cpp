///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t;
string s;
main()
{   ios
    cin>>t;
    while(t--)
    {   cin>>s;
        for(int i=0; i<s.size(); i++)
        {   if(s[i]=='0')
                cout<<5;
            else
                cout<<s[i];
        }
        cout<<endl;
    }
}
    