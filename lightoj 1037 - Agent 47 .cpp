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

#define TEST_CASE       int ___T; scanf("%d",&___T); for(int cs=1;cs<=___T;cs++)
#define PRINT_CASE      printf("Case %d: ",cs)

#define vpf(v)          for(int i=0;i<v.size();i++){pf("%d",v[i]);if(i!=v.size()-1)pf(" ");else pf("\n");}
#define vsc(v)          for(int i=0;i<v.size();i++)cin>>v[i];

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

  problem:
  for each test case 47 have to kill n enemy. During killing an enemy he can choose 
  best gun from all guns collected from his previously killed enemies and his own gun.
  what is the minimum time 47 need to shot?
  
  solution:
  which enemy we selecting to kill and which gun we using not depending on any thing,
  so we bitmaskng on n to keep track which one is killd and which one still alive.
  and choosing enemy and gun from all possible formation.
  
*/


int n, enemy[20];
int gun[20][20];
int dp[40000];

int solve(int mask){ 
    if(mask == (1<<n)-1) return 0;
    if(dp[mask] != -1) return dp[mask];

    dp[mask] = 1e9;

    for(int i = 0; i < n; i++){
        if(!check_bit(mask, i)){
            
            for(int j = 0; j < n; j++){
                if(check_bit(mask, j) && gun[j][i]){

                    dp[mask] = min(dp[mask], solve(on_bit(mask, i)) + ((enemy[i]+gun[j][i]-1)/gun[j][i]));
                }
            }

            dp[mask] = min(dp[mask], solve(on_bit(mask, i)) + enemy[i]);
        }
    }

    return dp[mask];
}


int main(){
    
    TEST_CASE{
        n = II;
        for(int i = 0; i < n; i++) enemy[i] = II;

        getchar();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) gun[i][j] = (int)(CC - 48);
            getchar();
        }

        MS1(dp);
        printf("Case %d: %d\n", cs, solve(0));
    }
    return 0;
}
