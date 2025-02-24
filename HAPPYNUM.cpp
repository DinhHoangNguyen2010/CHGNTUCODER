///Try to do,not try to say
///Accept the fact that you are alone
///Remember the times you promised yourself to be a better version of yourself!
#include<bits/stdc++.h>
#define int long long
#define vip 10000005
#define mod 1000000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int t,k;
string s;
main()
{   ios
    cin>>t;
    while(t--)
    {   cin>>s>>k;
        if(k%2==1)
        {   cout<<"NO"<<endl;
            continue;
        }
        int s1=0,s2=0;
        for(int i=0; i<s.size()/2; i++)
            s1+=s[i]-48;
        for(int i=s.size()/2; i<s.size(); i++)
            s2+=s[i]-48;
        if(s1==s2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
