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

  Very nice Dp problem.
  first it was like impossible to solve this...
  how is it even possible to reach the distanition and return again and no revisit is allowed...
  not possible by dp.
  
  but if you observe...
  what we need is 2 non overlaping path at any point from 1,1 to n,m
  simply we can move 2 pointer (x1, y1) and (x2, y2) upper left to lower right to get 2 path..
  dp state will be only (x1,y1,x2), enought to identify state of 2 point.

*/





int n, m;
int city[105][105];
int dp[101][101][101];

int solve(int x1, int y1, int x2, int y2){
    if(x1 >= n || y1 >= m || x2 >= n || y2 >= m) return 0;
    if(x1 == x2 || y1 == y2)return 0;

    int &ret = dp[x1][y1][x2];
    if(ret != -1) return ret;
    ret = 0;

    int a = solve(x1+1, y1, x2+1, y2);
    int b = solve(x1+1, y1, x2, y2+1);
    int c = solve(x1, y1+1, x2+1, y2);
    int d = solve(x1, y1+1, x2, y2+1);

    return ret = max(a, max(b, max(c, d))) + city[x1][y1] + city[x2][y2];
}

int main(){
    //fileio;

    TEST_CASE{
        n = II, m = II;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                city[i][j] = II;
            }
        }

        MS1(dp);
        printf("Case %d: %d\n", cs, solve(0, 1, 1, 0) + city[0][0] + city[n-1][m-1]);
    }
    
    return 0;
}
