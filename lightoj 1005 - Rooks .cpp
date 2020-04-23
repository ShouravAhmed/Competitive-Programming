#include <bits/stdc++.h>
using namespace std;


//************** StrAnge.R *********************

#define ll              long long int
#define ull             unsigned long long
#define lll             __int128
#define vi              vector<int>
#define vl              vector<ll>
#define vvi             vector<vector<int> >
#define pii                 pair<int,int>
#define pll              pair<ll,ll>
#define vii             vector<pii>

#define sz(v)           ((int)(v).size())
#define all(s)          s.begin(),s.end()
#define allr(s)         s.rbegin(),s.rend()
#define unq(c)          (sort(all(c)), c.resize(distance(c.begin(),unique(all(c)))))
#define get_pos(c,x)    (lower_bound(all(c),x)-c.begin())

#define MS0(v)          memset((v), 0, sizeof((v)))
#define MS1(v)          memset((v), -1, sizeof((v)))
#define LEN(v)          strlen(v)

#define MP              make_pair
#define pb              push_back
#define pob             pop_back
#define ff              first
#define ss              second
#define sc              scanf
#define pf              printf
#define endl            "\n"

#define LL              ({ll __LL; scanf("%lld",&__LL); __LL;})
#define II              ({int __II; scanf("%d",&__II); __II;})

#define TEST_CASE       int ___T; scanf("%d",&___T); for(int cs=1;cs<=___T;cs++)
#define PRINT_CASE      printf("Case %d: ",cs)

#define vpf(v)          for(int i=0;i<v.size();i++){cout<<v[i];if(i!=v.size()-1)cout<<" ";else cout<<"\n";}
#define vsc(v)          for(int i=0;i<v.size();i++)scanf("%d",&v[i]);

#define REP(i, n)       for (int i = 0; i < (n); i++)
#define REPP(i, a, b)   for (int i = (a); i < (b); i++)
#define FOR(i, a, b)    for (int i = (a); i <= (b); i++)
#define FORS(i, s)      for (int i = 0; s[i]; i++)

#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fileio          freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)

#define intlim          2147483648
#define infinity        (1LL<<50)

#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))


int on_bit(int N,int pos){return N = N | (1<<pos);}
int off_bit(int N,int pos){return N = N & ~(1<<pos);}
bool check_bit(ll N,int pos){return (bool)(N & (1<<pos));}


#define start_clock     clock_t tStart = clock()
#define end_clock       printf("\n>>Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC)

template<class T>inline bool read(T &x){int c=getchar();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; x*=sgn; return ~c;}


//******************* my code starts here **********************************

/*

  Just another basic Combinatorics.
  in a n*n grid we can place at most n rook.
  so we can place r rook in n correct place of the board in nCr way.
  and it is also possible to permute the rook pieces.
  
  so....
  solution is : nCr * nPr
  
*/



ll nc[33][33];
ll nCr(ll n, ll r){
    if(r == 1) return n;
    if(n == r) return 1;

    if(nc[n][r] != 0) return nc[n][r];

    ll a = nCr(n-1, r-1);
    ll b = nCr(n-1, r);

    return nc[n][r] = a + b;
}

ll nPr(ll n, ll r){
    ll ret = 1;
    for(ll i = (n-r+1); i <= n; i++) ret *= i;
    return ret;
}

int main() {
    //fileio;

    TEST_CASE{
        ll n = LL, k = LL;

        if(k > n) printf("Case %d: 0\n", cs);
        else if(k == 0) printf("Case %d: 1\n", cs);
        else printf("Case %d: %lld\n", cs, nPr(n, k) * nCr(n, k));
    }
    return 0;
}
