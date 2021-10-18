#include <bits/stdc++.h>
#include <cstdlib> 
using namespace std;
#define FS              ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll              long long int
#define pb push_back
#define S second
#define F first
#define endl			"\n"
ll MOD=1e9+7;
#define pll				pair<int , int>
#define ALL(v)      	v.begin(),v.end()
#define ALLR(v)     	v.rbegin(),v.rend()




void solve() 
{
	ll n,max=0;
    cin>>n;
    vector<ll>v(n);
    map<ll,ll>m;
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
    for(ll i=1;i<=n;i++)
    {
        if(m[i]>max)
            max=m[i];
    }
    cout<<max<<endl;
}
    


      
int main()
{
       
        
    int t=1;

    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}