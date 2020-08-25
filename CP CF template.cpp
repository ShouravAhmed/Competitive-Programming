#include <bits/stdc++.h>
using namespace std;

/*
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
*/

//************** StrAnge.R *********************

#define ll 				long long int
#define ull				unsigned long long
#define ld              long double
#define lll				__int128
#define vi 				vector<int>
#define vl              vector<ll>
#define vvi 			vector<vector<int> >
#define pii 			pair<int,int>
#define piii            pair<int,pair<int,int> >
#define pll             pair<ll,ll>
#define vii             vector<pii>
#define min_pq			priority_queue<int,vector<int>,greater<int> >

#define sz(v) 			((int)(v).size())
#define all(s) 			s.begin(),s.end()
#define allr(s) 		s.rbegin(),s.rend()
#define unq(c) 			(sort(all(c)), c.resize(distance(c.begin(),unique(all(c)))))
#define get_pos(c,x) 	(lower_bound(all(c),x)-c.begin())

#define MS0(v) 			memset((v), 0, sizeof((v)))
#define MS1(v) 			memset((v), -1, sizeof((v)))
#define LEN(v) 			strlen(v)

#define MP 				make_pair
#define pb 				push_back
#define pob 			pop_back
#define ff 				first
#define ss 				second
#define sc 				scanf
#define pf 				printf
#define endl 			"\n"

#define gcd(a, b)			__gcd(a, b)
#define lcm(a, b)			((a)*((b)/gcd(a,b)))

#define shuffle(v)			(random_shuffle(all(v)))
#define min_ele(v) 			(*min_element(all(v)))
#define max_ele(v) 			(*max_element(all(v)))
#define is_equal(x, y)		(abs(x-y)<eps)
#define cnt_ele(v, x)		(count(all(v), x))
#define sum_ele(v)			(accumulate(all(v),0))
#define pro_ele(v)			(accumulate(all(v),1, multiplies<int>()))
#define init_range(v, x)	(iota(all(v),x))
#define ran(a, b)           ((((rand() << 15) ^ rand()) % ((b) - (a) + 1)) + (a))
inline int random(int _min, int _max) { static bool first = true; if (first)  {  srand(time(NULL)); first = false; } return _min + rand() % (( _max + 1 ) - _min); }

#define TEST_CASE 			int ___T; cin>>___T; for(int cs=1;cs<=___T;cs++)
#define PRINT_CASE 			cout << "Case " << cs << ": ";
#define PRINT_CASEN 		cout << "Case " << cs << ":\n";
template<class T>inline bool read(T &x)	{int c=getchar();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; x*=sgn; return ~c;}

#define vpf(v) 				for(int i=0;i<v.size();i++){cout<<v[i];if(i!=v.size()-1)cout<<" ";else cout<<"\n";}
#define vsc(v) 				for(int i=0;i<v.size();i++)cin>>v[i];

#define FOR(i, a, b, stp) 	for(int i = (a); i <= (b); i+=stp)
#define ROF(i, a, b, stp) 	for(int i = (a); i >= (b); i-=stp)

#define intmx           INT_MAX
#define inf            	1llu<<61
#define PI              3.14159265358979323846264338327950L
#define MOD             1000000007
#define MAX             100010
#define eps				1e-9

inline ll  exp(ll a, ll b)    	{ a %= MOD; ll res = 1; while (b > 0) { if(b & 1) { res = res * a % MOD; } a = a * a % MOD; b >>= 1; } return res; }
inline int add(int a, int b) 	{ a += b; if(a >= MOD) a -= MOD; return a; }
inline int sub(int a, int b) 	{ a -= b; if(a < 0) a += MOD; return a; }
inline int multi(ll a, ll b) 	{ a *= b; if(a >= MOD) a %= MOD; return a; }

inline int on_bit(int N,int pos)	{return N = N | (1<<pos);}
inline int off_bit(int N,int pos)	{return N = N & ~(1<<pos);}
inline bool check_bit(ll N,int pos)	{return (bool)(N & (1<<pos));}
#define on_bit_cnt(x)				(__builtin_popcount(x))
#define on_bit_cntll(x)             (__builtin_popcountll(x))

#define start_clock		clock_t tStart = clock()
#define end_clock		printf("\n>>Runtime: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC)

#define fastio			ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fileio			freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)


//******************* my code starts here **********************************


int main() {

	
	return 0;
}
