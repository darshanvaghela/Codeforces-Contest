#include <bits/stdc++.h>      
using namespace std;            

#define    int               long long int
 #define    bp(x)         __builtin_popcount(x)
#define  ld         long double
 #define  f(i,j,n)            for(int i = j; i <= n; i++)
#define  r(i,n,j)       for(int i = n; i >= j; i--)
 #define  all(container)       container.begin() , container.end()
#define  sz(container)   (int)container.size()
 #define  ff             first
#define  ss             second
 #define  pii      pair <int , int>
#define  sp(x)       setprecision(x)
#define  mod  1000000007
#define  endl  "\n"
 #define  pb    push_back
#define  mp    make_pair
 #define  T     int ttt; cin >> ttt; while(ttt--)
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);

int power(int x, int y, int p)  
{  
    int res = 1;    
    x = x % p; 
    if (x == 0) return 0; 
    while (y > 0)  
    {     
        if (y & 1)  
            res = (res*x) % p;  
        y = y>>1; 
        x = (x*x) % p;  
    }  
    return res; 
}

int32_t main()
{
    fast
    T{
        int n,k,g=0,x,ff=0;    cin>>n>>k;
        int a[n+1];
        f(i,1,n)    cin>>a[i];
        sort(a+1,a+n+1);
        f(i,2,n)
            g=__gcd(g,a[i]-a[i-1]);
        f(i,1,n){
            x=abs(a[i]-k);
            if(x%g==0)
                ff=1;
        }
        if(ff)  cout<<"YES\n";
        else    cout<<"NO\n";
    }   
}