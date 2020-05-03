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
#define CC              ({char __CC; scanf("%c",&__CC); __CC;})
#define DD              ({double __DD; scanf("%lf",&__DD); __DD;})

#define TEST_CASE       int ___T; scanf("%d",&___T); for(int cs=1;cs<=___T;cs++)
#define PRINT_CASE      printf("Case %d: ",cs)

#define vpf(v, len)          for(int ix=0;ix<len;ix++){pf("%d",v[ix]);if(ix!=len-1)pf(" ");else pf("\n");}
#define vsc(v, len)          for(int ix=0;ix<len;ix++)scanf("%d",&v[ix]);

#define REP(i, n)       for (int i = 0; i < (n); i++)
#define REPP(i, a, b)   for (int i = (a); i < (b); i++)
#define FOR(i, a, b)    for (int i = (a); i <= (b); i++)
#define FORS(i, s)      for (int i = 0; s[i]; i++)

#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define fileio          freopen("in.txt","r",stdin);freopen("out.txt","w",stdout)

#define intlim          2147483648
#define infinity        (1LL<<50)
#define intmx           INT_MAX

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
** uva 11307 - Alternative Arborescence **

description : A tree is given, color each node with an integer such that no two adjacent node has the same color and sum of integers is minimum.
solution : it can be colored using only two integer 1 and 2 running a dfs, but this way we wouldn't get minimum value,
           for example a situation like that can arise that, optimal vlue of parent of node (3) is 2, so we have to color (3) by 1
           and (3) has 5 child and they will be colored by 2, which will not give the minimum, if we color (3) by 3 and all 
           if its child by 1, then we will get minimum ans. 
           so we have many choices for a node, which maximizing the function call exponentially and has overlapping call.
           we can easily memorize states in  -> dp[current_node][previous_color] .
*/





int n;
vi adj[10005];
int dp[10005][11];

int solve(int pos, int prv, int val) {

    if(dp[pos][val] != -1) return dp[pos][val];

    int ret = 1e9;

    for(int x = 1; x <= 10; x++) {
        if(x != val){
            int a = x;
            for(auto i : adj[pos]) {
                if(i != prv) {
                    a += solve(i, pos, x);
                }
            }
            ret = min(ret, a);
        }
    }

    return dp[pos][val] = ret;
}


int main() { 
    //fileio;

    while(cin>>n, n) {
        for(int i=0;i<=n;i++) adj[i] = vi();

        for(int i=0;i<n;i++){
            getchar();
            string s, w;
            getline(cin, s);
            reverse(all(s));
            while(s.back() != ' '){
                s.pop_back();
                if(s.size() == 0) break;
            }
            if(s.size() == 0) continue;
            reverse(all(s));

            stringstream str(s);
            while(str >> w){
                int x = 0;
                for(int j=0;j<w.size();j++){
                    x = (x*10) + (w[j]-48);
                }
                
                adj[i].push_back(x);
                adj[x].push_back(i);
            }
        }
        for(int i=0;i<n;i++) unq(adj[i]);

        MS1(dp);
        cout << solve(0, -1, 0) << "\n";
    }
    return 0;
}
