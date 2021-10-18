#include<bits/stdc++.h>

using namespace std;
using   ll = long long;
using   ld = long double;

#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define pb              push_back
#define mp              make_pair
#define F               first
#define S               second
#define pii             pair<int , int>
#define int             long long int
#define endl            "\n"


#define ALL(v)          v.begin(),v.end()
#define ALLR(v)         v.rbegin(),v.rend()
#define pi              3.14159265358979323
#define inf             LLONG_MAX
#define ones(x)         __builtin_popcount(x)
#define fill(a,b)       memset(a,b,sizeof(a))
#define mod             1000000007
#define hell            998244353

ll mod_pow(ll a,ll b,ll m)
{
    ll res = 1;
    while(b)
    {
        if(b&1)
        {
            res=(res*a) % m;
        }
        a=(a*a) % m;
        b>>=1;
    }
    return res;
}

ll mod_inverse(int a , int m)
{
    return mod_pow(a , m - 2 , m);
}

int ok(int n , int d) {
	while(n > 0) {
		if(n % 10 == d) return 1;
		n /= 10;
	}
	return 0;
}

void solve()
{
	int n;
	
	cin >> n;
	
	n = 2*n;
	
	int a[n];
	
	set< int > t;
	
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	set< int > s;
	
	sort(a , a + n);
	reverse(a , a + n);
	
	for(int i = 0; i < n; i += 2) {
		if(a[i] != a[i + 1]) {
			cout << "NO\n";
			return;
		}
	}
	
	int prv = 0;
	
	map<int , int> f;
	
	for(int i = 0; i < n; i += 2) {
		int t1 = a[i];
		a[i] -= 2*prv;
		if(a[i] <= 0) {
			cout << "NO\n";
			return;
		}
		if(a[i] % (n - i)) {
			cout << "NO\n";
			return;
		}
		
		prv += (a[i] / (n - i));
		
		s.insert(a[i] / (n - i));
		
		if((a[i] / (n - i)) == 0) {
			cout << "NO\n";
			return;
		}
	}
	
	if(s.size() != n/2) {
		cout << "NO\n";
		return;
	}
	
	cout << "YES\n";
}

signed main() {
    fast;
    
    int t = 1;
    
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}