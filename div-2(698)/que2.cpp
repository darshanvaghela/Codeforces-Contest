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
bool fun(ll r,ll d)
{
    while(r>0)
    {
        if(r%10==d)
        {
            return true;
        }
        r=r/10;
    }
    return false;
}



void solve() 
{
	
    ll n,d;
    cin>>n>>d;
    //ll x=10-d;
    vector<ll>v(n);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            //cout<<v[i]<<" ";
            ll m=v[i]/d,ans=0,h=20;
            ll u=min(h,m);
            ll r=(v[i]%d);
            if(r==0)
            {
                cout<<"YES"<<endl;
                goto X;
            }
            //cout<<fun(v[i],d)<<" ";
            if(fun(v[i],d))
                {
                    ans=1;
                    goto y;
                }
            for(ll j=0;j<u;j++)
            {
                //cout<<r<<" ";
                //cout<<fun(r,d)<<endl;
                if(fun(r,d))
                {
                    ans=1;
                }
                 r+=d;
               
            }
            y:
            if(!ans)
            cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            X:
            cout<<"";
        }
            
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