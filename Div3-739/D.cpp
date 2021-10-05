#include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
#define ordered_set tree<int, null_type,less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
 
#define FS              ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll              long long int
#define ld              long double
#define pb              push_back
#define bp              __builtin_popcount
#define sz              size()
#define ff              first
#define ss              second
#define vll             vector<ll>
#define vbool           vector<bool>
#define vpll            vector<pair<ll,ll>>
#define pll             pair<ll,ll>
#define vllv            vector<vector<ll>>
#define setpri(x)       cout<<setprecision(x)<<fixed;
#define all(v)          v.begin(),v.end()
#define allr(v)         v.rbegin(),v.rend()
#define yesr {cout<<"YES"<<endl;return;}
#define nor {cout<<"NO"<<endl;return;}
// getline (std::cin,name);
ll MOD=1e9+7;
ll ceil1(ll n,ll x){return (n-1)/x+(n>0);}
 
ll gcd(ll a,ll b){return __gcd(a,b);}
ll lcm(ll a,ll b){return (max(a,b)/gcd(a,b))*min(a,b);}
 
ll pow1(ll n,ll m ,ll mod=MOD );
ll pow2(ll n,ll k);
 
ll modinv(ll n,ll mod=MOD){  return pow1(n,mod-2,mod);}
 
bool func(pair<ll,ll> &a,pair<ll,ll> &b ){
        if(a.ff != b.ff)return a.ff < b.ff;
        return a.ss > b.ss;
}
 

        
ll const N=(ll)1e5+11;
ll const LG=(ll)log2(N)+1;

ll chk(string s,string t){
        
        ll i,j,n,m;
        n=s.size();
        m=t.size();
        s=' '+s;
        t=' '+t;
        ll ans=n+m;
        j=1;
        for(i=1;i<=n;i++){
                if(s[i]==t[j]){
                        j++;
                        ans-=2;
                }
                if(j>m)break;
        }
        return ans;
}
void solve(){
        ll i,j,n,m,k,x,y,l,r;
       
          string s,t;
        cin>>s;
        ll ans=s.size()+1;
        for(i=0;i<=61;i++){
                ll p=pow2(2,i);
                t=to_string(p);
                // cout<<s<<" "<<t<<" "<<chk(s,t)<<endl;
                ans=min(ans,chk(s,t));
        }
        cout<<ans<<endl;
        
        
        
}

int main(){
        FS;
 
        ll i,j,k,n,m,x,y,z,q;
        q=1;
        cin>>q;
        for(ll tc=1;tc<=q;tc++){	
                // cout<<"Case #"<<tc<<": ";
                solve();
        }
        return 0;
}
 
 
ll pow1(ll n,ll m,ll mod){
        if(m==0)return 1;
 
        if(m%2==0)return pow1((n*n)%mod,m/2,mod);
 
        return (pow1((n*n)%mod,m/2,mod)*n)%mod;
}
 
ll pow2(ll n,ll k){
        ll ans=1;
            while(k>0){
                if(k%2==1)ans=ans*n;
                    if(k>1)
                n=n*n;
                k/=2;
            }
            return ans;
}