#include<bits/stdc++.h>
#define int long long
#define fi first
#define se second
#define mod 1000000007
#define vip 1000005
#define ios ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int s,n,a[vip];
bool check(int x) { /// Check if there are enough meals
    int suat=0;
    for(int i=1; i<=n; i++)
        suat+=x/a[i];
    return suat>=s;
}
main() {
    cin>>s>>n;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    int l=1,r=1e15,ans;
    while(l<=r) {
        int m=(l+r)/2;
        if(check(m)) { /// If enough meals,we try reduce meals preparation time
            r=m-1;
            ans=m;
        } else
            l=m+1;
    }
    cout<<ans;
}
