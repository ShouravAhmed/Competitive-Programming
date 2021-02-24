/*
* Author : Ahmed Abdullah Shourav
* Mail : ahmed15-898@diu.edu.bd
* Mobile : 8801303206223
*/

/*
* "A dream doesn't become reality through MAGIC. It takes Determination, Hard Work and Perseverance."
* "Work untill you don't have to introduce yourself"
*/


/*
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
#include <bitset>
using namespace std;*/


#include <bits/stdc++.h>
using namespace std;


//*************** optimization flag **********************
#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
//********************************************************

//container
#define ll long long int
#define ul unsigned long
#define ull unsigned long long
#define D double
#define vi vector<int>
#define vvi vector<vi>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector< pii >
#define msi map<string,int>
#define mis map<int,string>
#define sts set<string>
#define sti set<int>

// shortcuts
#define sf                  scanf
#define pf                  printf
#define pb                  push_back
#define pob                 pop_back
#define MP                  make_pair
#define ff                  first
#define ss                  second
#define endl                "\n"
#define all(s)              s.begin(),s.end()
#define unq(s)              sort(all(s)),(s).erase(unique(all(s)),s.end())  
#define clr(x, y)           memset(x, y, sizeof(x))
#define sz(c)               int(c.size())
#define gl(x)               getline(cin,x)
#define sqr(x)              ((x)*(x))
#define loop(i, y)          for(int i=0; i<int(y); i++)
#define FOR(i, x, y)        for(int i=int(x); i<int(y); i++)
#define ROF(i, x, y)        for(int i=int(x-1); i>=int(y); i--)
#define itr                 ::iterator
#define DEBUG(x)            cout << '>' << #x << ':' << x <<"\n";
#define fastio              ios_base::sync_with_stdio(0);cin.tie(0)
#define fileio              freopen("in.txt","r",stdin);freopen("out.txt","w",stdout) 

/// Constants
#define MAX                 10000007
#define MOD                 1000000009
#define base                1000000007
#define eps                 1e-9
#define INF                 1llu<<61    // 2,305,843,009,213,693,952
#define inf                 1<<29       // 536,870,912
#define PI                  acos(-1.0)  // 3.1415926535897932
#define PI                  3.14159265358979323846264338327950L

//Float value compareson
#define FasI(f)  (*((int *) &(f)))
#define FasUI(f) (*((unsigned int *) &(f)))

#define lt0(f)  (FasUI(f) > 0x80000000U)
#define le0(f)  (FasI(f) <= 0)
#define gt0(f)  (FasI(f) > 0)
#define ge0(f)  (FasUI(f) <= 0x80000000U)


//**** king move **********
int dr[]={-1,-1,-1,0,1,1, 1, 0};
int dc[]={-1, 0, 1,1,1,0,-1,-1};
//**************************
//**** knight move ********
int dr[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dc[] = { 2, 1, -1, -2, -2, -1, 1, 2 };
//**************************

//********** day of months *******************
vector<string> month = {"","January","February","March","April","May","June","July","August","September","October","November","December"}; 
vector<string> day = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
vector<int> mn = {0,31,28,31,30,31,30,31,31,30,31,30,31};
//********************************************

//************** printing int128 *************
std::ostream&
operator<<( std::ostream& dest, __int128_t value )
{
    std::ostream::sentry s( dest );
    if ( s ) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[ 128 ];
        char* d = std::end( buffer );
        do
        {
            -- d;
            *d = "0123456789"[ tmp % 10 ];
            tmp /= 10;
        } while ( tmp != 0 );
        if ( value < 0 ) {
            -- d;
            *d = '-';
        }
        int len = std::end( buffer ) - d;
        if ( dest.rdbuf()->sputn( d, len ) != len ) {
            dest.setstate( std::ios_base::badbit );
        }
    }
    return dest;
}
//*******************************************************



//********************** time tracker**************************
class TimeTracker {
    clock_t start, end;
public:
    TimeTracker() {
        start = clock();
    }
    ~TimeTracker() {
        end = clock();
        fprintf(stderr, "%.3lf s\n", (double)(end - start) / CLOCKS_PER_SEC);
    }
};

//*********************** FileIo ****************************
#ifndef ONLINE_JUDGE
    fileio;
#endif

//fast read integer
void read(int &x){
    x = 0; char c = getchar();
    while(c>='0' && c<='9')
        x = (x<<3) + (x<<1) + (c-'0'), c = getchar();
}

//************** Fast Reader ******************************
template<class T>inline bool read(T &x){int c=getchar();int sgn=1;while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; x*=sgn; return ~c;}



////////////////////////////////////////////////////////////////////////////////////////////////
******************************* Mathematics & Number Theory ********************************
////////////////////////////////////////////////////////////////////////////////////////////////

//************************* Logarithm **************************
logk(x^n)=n*logk(x);

logk(a*b) = logk(a) + logk(b);
logk(a/b) = logk(a) - logk(b);

logu(x) = (logk(x))/logk(u);
//**************************************************************

//****************SUM formulas**********************
1 + 2 + 3 + . . . + n = (n + 1)*(n / 2)
1 + 3 + 5 + . . . + n = (n + 1)*(n / 4)
2 + 4 + 6 + . . . + n = (n + 2)*(n / 4)
1^2 + 2^2 + 3^2 + . . . + n^2 = ((2n+1)/3)*(n(n+1)/2)
1^3 + 2^3 + 3^3 + . . . + n^3 = (n^2 * (n + 1)^2) / 4;
1 + 2 + 4 + 8 + . . . . + 2^n-1 = (2^n - 1)
//***********************************************

//********************** Geometric Progration *******************
if ratio between any consecutive number is constent its a geometric prograssion.
ax + ax^2 + ax^3 + b = (bx-a)/(x-1) 
//a is first and b is last number and x is ratio.

//********************** Arithmatic Progration *******************
is difference between any consecutive number is constent its a arithmatic prograssion.
a + --- + b = n(a+b)/2//n is number of elements and a ,b is first & last number.
//***************************************************************

//***************************************************************
all number between (1 to n) can be constraced by some sigment of n
minimum sigment = (((2^k)-1)<=n)+1;
//****************************************************************

//**************************************************************
if x < (n*(n+1))/2 ... then x could be expressed by sum of some number smaller then n

//***************************************************************
output two set of number (1-n) without repiting 
such that sum of any set of element should be 
devided by another set of element.
sol: there is an element which can devide sum of
all element (1-n) except that equally
//*****************************************************************

// express an integer as sum of consicutive positive numbers
if a number is power of two then it can not be expressed 
as sum of 2 or more consicutive positive integer.


//************ Number of latis point between 2 point **************
It is simply GCD(x1−x2,y2−y1).

y−y1   y2−y1
---- = -----
x−x1   x2−x1

Now just switching the positions of these expressions we get:

y−y1    x−x1
---- = -----
y2−y1   x2−x1
                                       y2−y1
Now , y−y1 should be equal to k × ----------------
                                  GCD(y2−y1,x2−x1)

Why ? x should be integer! If we write x in terms of everything else We will see
y−y1 
----  should be Integer.
y2−y1         

Now I say that k1=0 Gives me y1 , to find the final kn , 
I put y=y2 into this equation (x2,y2 is the last integral point) .

That gives me kn=GCD(y2−y1,x2−x1) . 
Now , every k between 0 and this kn are integral points!

If you include the initial point too ans is GCD(y2−y1,x2−x1)+1 .

If you exclude initial and final points ans is GCD(y2−y1,x2−x1)−1.
//********************************************************************


//******************* Interest Calculation *********************
//simple
A = principal + interest;
interest = principal * time * rate;
//compund
A = P(1 + (rate / interval_per_year))^(time*interval_per_year);
time = log(A / principal) / (interval_per_year * log(1 + (rate / interval_per_year)));

//**************************************************************



//************************** Fibonacci ************************

#define fib(x)  ((pow((1+sqrt(5)),x)-pow((1-sqrt(5)),x))/(pow(2,x)*sqrt(5)))

****

double fb[1000];
void fibo(){
    fb[0]=0;
    fb[1]=1;
    int i=2;
    while(1){
        double x=fb[i-2]+fb[i-1];
        fb[i]=x;
        if(i==101)break;
        i++;
    }
}

****

** sum of 1 to nth Fibonacci number is = fib(n+2)-1;

****

** Matrix form **
It is easy to prove the following relation:

(F(n−1), F(n))=(F(n−2) F(n−1))⋅(0 1)
                               (1 1)

Denoting P≡(0 1)
           (1 1), 
we have:
(F(n) F(n+1))=(F(0) F(1))⋅P^n
Thus, in order to find F(n), we must raise the matrix P to n.
This can be done in O(logn).

Fast Doubling Method:
Using above method we can find these equations:
F(2k)=F^2(k+1)+F^2(k)
F(2k+1)=Fk(2F(k+1) − F(k))
Thus using above two equations 
Fibonacci numbers can be calculated easily by the following code:


//fibonacci number by matrics method
pair<ll,ll> fibo(int n){
    if(n==0)return make_pair(0,1);
    auto p = fibo(n>>1);
    ll x = p.first * ((2 * p.second) - p.first);
    ll y = (p.first*p.first) + (p.second*p.second);
    if(n&1)return make_pair(y,x+y);
    return make_pair(x,y);
}


The above code returns Fn and Fn+1 as a pair

// my implementation ----------------------------------------------------------

pair<pair<ll,ll>,pair<ll,ll> > matfibo(int n){
    if(n==1)return mp(mp(1,1),mp(1,0));
    pair<pair<ll,ll>,pair<ll,ll> > p = matfibo(n/2);
    p = mp(mp(((p.ff.ff*p.ff.ff)+(p.ff.ss*p.ss.ff)),((p.ff.ff*p.ff.ss)+(p.ff.ss*p.ss.ss))),mp(((p.ss.ff*p.ff.ff)+(p.ss.ss*p.ss.ff)),((p.ss.ff*p.ff.ss)+(p.ss.ss*p.ss.ss))));
    if(n&1)p = mp(mp((p.ff.ff+p.ff.ss),p.ff.ff),mp((p.ss.ff+p.ss.ss),p.ss.ff));
    return p;
}

/*  output:
pair<pair<ll,ll>,pair<ll,ll> > p = matfibo(n);
printf("f(n)   = %lld\nf(n-1) = %lld\n",p.ff.ff,p.ss.ff);
*/
//********************************************************************************


//***************** Aproximate Prime ****************************
** approximately number of prime between 1 - n is : π(n) = n / ln(n); 
//**************************************************************


//*********************** Prime factorization *********************
* prime factorization is express Coposit number as product of prime numbers;

* if m = p1^a1 * p2^a2 ... ... pk^ak;
     n = p1^b1 * p2^b2 ... ... pk^bk;
  then, LCM(m,n) = p1^max(a1,b1) * p2^max(a2,b2) ... ... pk^max(ak,bk);
  and GCD(m,n) = p1^min(a1,b1) * p2^min(a2,b2) ... ... pk^min(ak,bk);

* for any positive complete number a, b and c => 
        GCD(ac, bc) = c * GCD(a, b);
    and LCM(ac, bc) = c * LCM(a, b);

* for any complete number a & b => (a * b) = GCD(a,b) * LCM(a,b);
//**************************************************************



//**************** inclucation exclution ***********************

how many number between 1 to 30 is devisible by... 5 & 6.
ans = ((30/5)+(30/6)) - (30/(5*6));

set2:
(a) = (a);

set2:
(aΠb) = (a)+(b) -(aΠb);

set3:
(aΠbΠc) = (a)+(b)+(c)-(aΠb)-(aΠc)-(bΠc)+(aΠbΠc);

set4:
(aΠbΠcΠd) = (a)+(b)+(c)+(d)-(aΠb)-(aΠc)-(aΠd)-(bΠc)-(bΠd)-(cΠd)
            +(aΠbΠc)+(aΠbΠd)+(aΠcΠd)+(bΠcΠd)-(aΠbΠcΠd);
//**************************************************************


// ********************** Factorial ******************************



// Number of digit of factorial

int number_of_digit_of_fact( int n, int k ) {
    double fact = 0, eps = 1e-9;
    
    for ( int i = 1; i <= n; i++ ) {
        fact += log10 ( i );
    }
    
    return (fact+1);
}


// Leading digits of factorial 

int leading_digit_of_fact( int n, int k ) {
    double fact = 0, eps = 1e-9;
    
    for ( int i = 1; i <= n; i++ ) {
        fact += log10 ( i );
    }
    
    double q = fact - floor ( fact+eps );
 
    double B = pow ( 10, q );
 
    for ( int i = 0; i < k - 1; i++ ) {
        B *= 10;
    }
    return floor(B+eps);
}

//**************************************************************


//******************** Legranges theorem *************************
** Legranges theorem state that, every positive integer can be represented 
** as sum of 4 squre number  ex: 123 = 8^2 + 5^2 + 5^2 + 3^2
//**************************************************************

//******************** Willson theorem *************************
** Willson theorem state that, if a number N is prime then ::: (N-1)! % N = N-1
//**************************************************************

//*************** Zeckendorfs theorem **************************
** Zeckendorfs theorem state that, every positive integer has a unique representation 
** as a sum of Fibonacci numbers... ex: 74 = 55 + 13 + 5 + 11. 
//**************************************************************

//********************* Pythagorien triple ***********************************

Pythagorien triple (a,b,c) is kind of triple where ...

a^2 + b^2 = c^2

Euclidian formula to produce all primitive Pythagorien tryple is...

((n^2 - m^2),(2*n*m),(n^2 + m^2))

where n & m are coprime and greater then 0 and at least 1 of them(a/b/c) is even

//****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ****** ******


//************************** Gray Code *********************
// n to g
int g (int n) {
    return n ^ (n >> 1);
}

// g to n
int rev_g (int g) {
  int n = 0;
  for (; g; g >>= 1)
    n ^= g;
  return n;
}
//***************************************************************


//***************** PRIME Generator & Tester ********************

//***** normal prime generator *****
int isprime(int n){
    if(n < 2) return 0;
    if(n == 2) return 1;
    if(!(n & 1)) return 0;
    int x = sqrt(n) + 1;
    for(int i = 3; i <= x; i += 2) {
        if(n % i == 0) return 0;
    }
    return 1;
}

//***** seive prime generator from 1 to n *****
vector<int> prime;
bool mark[100000000];

void sieve(int n){//lim 1e7
    int lim=sqrt(n*1.0)+2;
    for(int i=4;i<=n;i+=2)mark[i]=1;
    prime.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(!mark[i]){
            prime.push_back(i);
            if(i<lim){
                for(int j=i*i;j<=n;j+=i*2)mark[j]=1;
            }
        }
    }
}

//***** Sieve using half memory *****

void half_mem_sieve(int n){//lim 2*1e7
    int lim=sqrt(n);
    prime.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(!mark[i/2]){
            prime.push_back(i);
            if(i<=lim){
                for(int j=i*i;j<=n;j+=(i*2))mark[j/2]=1;
            }
        }
    }
}

//***** Bitwise seive with full iteration *****

int setBit(int n, int position){
    n = n | (1 << position);
    return n;
}
 
bool checkBit(int n, int position){
    return (n & (1 << position));
}
 
void bitSieve(int n){
    int lim=sqrt(n);
    mark[0]=setBit(mark[0], 0);
    mark[0]=setBit(mark[0], 1);
    prime.push_back(2);
    for(int i=4; i<=n; i+=2){
        mark[i>>5] = setBit(mark[i>>5], i&31);
    }
    for(int i=3;i<=n;i+=2){
        if(!checkBit(mark[i>>5], i&31)){
            prime.push_back(i);
            if(i<=lim){
                for(int j=i*i;j<=n;j+=i*2){
                    mark[j>>5] = setBit(mark[j>>5], j&31);
                }
            }
        }
    }
}

//***** bitSieve with Half memory *****

void half_mem_bitSieve(int n){
    int lim=sqrt(n);
    prime.push_back(2);
    for(int i=3; i<=n; i+=2){
        if(!checkBit(mark[i>>6], ((i>>1)&31))){
            prime.push_back(i);
            if(i<=lim){
                for(int j=i*i; j<=n; j+=i*2){
                    mark[j>>6] = setBit(mark[j>>6], ((j>>1)&31));
                }
            }
        }
    }
}


//***** sigmented seive : its generate all prime between 2 given number *****

void segmented_sieve(ll lo, ll hi) {
    bool mark[hi-lo+5]; MS0(mark);

    for(int i = 0; (ll)prime[i] * prime[i] <= hi; i++) {

        long start = ceil(lo / (prime[i] * 1.0)) * prime[i];
        if(prime[i] == start) start += prime[i];

        for(long j = start; j <= hi; j += prime[i]) {
            mark[j-lo] = 1;
        }
    }

    for(long i = max(lo,(ll)2); i <= hi; i++) {
        if(!mark[i-lo]) printf("%lld\n", i);
    }
}

//********************* Optimized Linear Sieve *************************

//Complixity O(n), also give prime factorization as side effect.
int lp[10000100];
void linear_sieve(int n){
    for(int i=2;i<=n;i++){
        if(lp[i]==0){
            lp[i]=i;
            prime.push_back(i);
        }
        for(int j=0 ;j<=prime.size() && prime[j]<=lp[i] && i*prime[j]<=n ;j++){
            lp[i*prime[j]]=prime[j];
        }
    }
}

//*************** most optimized sieve : from tanima ***************************

vector <int> prime; //In this vector all the primes are saved
bitset<MAXP> mark; //nonprime indexes are true, prime indexes are false here

void sieve(){
    int m=1.0*sqrt(MAXP)+2; int x;
    prime.push_back(2); prime.push_back(3);
    mark[0]=mark[1]=true;
    for(int i=4;i<MAXP;i+=2)mark[i]=true;
    for(int i=9;i<MAXP;i+=6)mark[i]=true;
    for(int i=5;i<MAXP;i+=6){
        if(!mark[i]){
            prime.push_back(i);
            if(i<=m) 
                for(int j=i*i;j<MAXP;j+=2*i)mark[j]=true;
        }
        if(!mark[i+2]){ x=i+2;
            prime.push_back(x);
            if(x<=m)
                for(int j=x*x;j<MAXP;j+=2*x)mark[j]=true;
        }
    }
}

//******************* Factorial Modulas *************************
int factmod(int n, int p) { //O(plog(n))
    int res = 1;
    while (n > 1) {
        res = (res * ((n/p) % 2 ?  p-1 : 1)) % p;
        for (int i = 2; i <= n%p; ++i)
            res = (res * i) % p;
        n /= p;
    }
    return res % p;
}
//***************************************************************


//********************** Prime Factorization **************************

//***** efficient prime factorization by sieve *****

map<int,int> prime_factor_sod_nod(ll n, int &nod, ll &sod, ll &phi){
    map<int,int> ret;
    ll tmp=n;
    for(int i=0; prime[i] * prime[i] <= n; i++){
        while(!(n%prime[i])){
            ret[prime[i]]++;
            n/=prime[i];
        }
    }
    if(n>1)ret[n]++;
    
    int div=1;
    ll sum=1,Phi=tmp;
    for(const auto &x : ret){
        div *= (x.second+1);
        sum *= (((pow(x.first,x.second)*x.first)-1)/(x.first-1));
        Phi *= (1.0-(1.0/x.first));
    }
    nod=div;
    sod=sum;
    phi=Phi;

    return ret;
}

//***************************************************************
map<ll,int> prime_factor_without_divisor(ll n){
    map<ll,int> ret;
    for(int i=0; (prime[i]*prime[i]<=n && i<prime.size()); i++){
        while(!(n%prime[i])){
            n/=prime[i];
            ret[prime[i]]++;
        }
    }
    if(n>1)ret[n]++;
    
    return ret;
}

//******* Prime Factorization in Log(n) time ******

int spf[10000100];
void smallest_prime_fector(int n){// good range 1e6
    int lim=sqrt(n)+2;
    for(int i=1;i<=n;i++)spf[i]=i;
    for(int i=4;i<=n;i+=2)spf[i]=2;
    for(int i=3;i<=n;i+=2){
        if(spf[i]==i && i<=lim){
            for(int j=i*i;j<=n;j+=i){
                if(spf[j]==j)spf[j]=i;
            }
        }
    }
}

vector<int> logn_prime_factor(int n){
    vector<int> ret;
    while(n!=1){
        ret.push_back(spf[n]);
        n/=spf[n];
    }
    return ret;
}

// *************************** Prime factorization of Factorial ***********************************

map<int,int> factorial_prime_factor(int n){//need all prime upto n
    map<int,int> mp;
    for(int i=0;prime[i]<=n;i++){
        int x=n,sum=0;
        while(x>1){
            sum+=(x/prime[i]);
            x/=prime[i];
        }
        mp[prime[i]]=sum;
    }
    return mp;
}

// ********* sum of number of divisor of all number upto n : snod *************

int SNOD( int n ) {
    int res = 0;
    int u = sqrt(n);
    for ( int i = 1; i <= u; i++ ) {
        res += ( n / i ) - i; //Step 1
    }
    res *= 2; //Step 2
    res += u; //Step 3
    return res;
}

//******* prime factorization sqrt(n) *********

vector<int> sqrt_prime_factorization(int n){
    vector<int> fct;
    while(n%2==0){
        fct.push_back(2);
        n >>= 1;
    }
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            fct.push_back(i);
            n/=i;
        }
    }
    if(n>2)fct.push_back(n);
    return fct;
}
//*******************************************************************

//************************** Divisors **************************

//*** sum of divisor of all number upto n ******

ll sum_of_divisor_of_all_number_upto_n(int n){ //O(n)
    ll ret=0;
    for(int i=1;i<=n;i++)ret+=((n/i)*i);
    return ret;
}

ll sum_of_divisor_of_all_number_upto_n(ll n){ //O(sqrt(n))
    ll ret=0, lim = sqrt(n);
    for(int i=1;i<=lim;i++)ret += ((n/i)*i);
    lim = n/(lim+1);
    for(int i=1;i<=lim;i++){
        ll x = n/i , y = n/(i+1);
        ret += i*(((x*(x+1)) - (y*(y+1)))/2);
    }
    return ret;
}

//********* Efficient divisors upto 18 digit number **********

void devisor_of_18digit_number_ans(vector<vector<ll> > &v, int x, ll ans, vector<ll> &dev){
    if(x>=v.size()){
        dev.push_back(ans);
        return;
    }
    for(int i=0;i<v[x].size();i++){
        ans*=v[x][i];
        devisor_of_18digit_number_ans(v,x+1,ans,dev);
        ans/=v[x][i];
    }
}


vector<ll> devisor_of_18digit_number(ll n){//first generate 1e8 prime
    vector<vector<ll> > v;
    vector<ll> tmp;

    tmp.push_back(1);
    
    for(int i=0;(prime[i]*prime[i]<=n && i<prime.size());i++){
        while(!(n%prime[i])){
            n/=prime[i];
            tmp.push_back(prime[i]);
        }
        
        if(tmp.size()>1){
            for(int j=1;j<tmp.size();j++){
                tmp[j]*=tmp[j-1];
            }
            v.push_back(tmp);
            tmp=vector<ll>();
            tmp.push_back(1);
        }
    }
    if(n>1){
        tmp.push_back(n);
        v.push_back(tmp);
    }
    vector<ll> dev;
    devisor_of_18digit_number_ans(v,0,1,dev);
    return dev;
}

// ************** highly composite number ******************

vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23};
int res_div, res_num, n;

void highly_composite_number(int pos, long long num, int div) { 

    if(div > res_div) {
        res_div = div;
        res_num = num;
    }
    else if(div == res_div && num < res_num) {
        res_num = num;
    }

    if(pos == prime.size()) return;
    long long val = prime[pos];

    for(int i = 1; i <= 30; i++) {
        if(num * val > n) break;
    
        highly_composite_number(pos+1, num * val, div * (i+1));
        val *= prime[pos];
    }
}

int main(){

    cin >> n;
    cout << "All highly composite number upto N :\n1\n";
    vector<int> ans;

    while(1) {
        res_div = res_num = 0;
        highly_composite_number(0, 1, 1);
        ans.push_back(res_num);
        n = res_num-1;   
        if(n == 1) break;
    }
    for(int i = ans.size()-1; i >= 0; i--) cout << ans[i] << "\n";
    
    return 0;
}


//***************** Divisors of n in sqrt(n) ************************

vector<int> divisor_in_sqrt(int n){
    vector<int> a,b;
    int lim=sqrt(n);
    for(int i=1;i<=lim;i++){
        if(n%i==0){
            if(n/i==i)a.push_back(i);
            else{
                a.push_back(i);
                b.push_back(n/i);
            }
        }
    }
    for(int i=b.size()-1;i>=0;i--)a.push_back(b[i]);
    return a;
}

//**** all devisors for number from 1 to n in nlogn *****
vector<int> divisors[10000100];
void Divisors(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            divisors[j].push_back(i);
        }
    }
}
//*******************************************************************************


//****** Represent a number as Subtraction of 2 square number ***********
bool is_subtract_of_square(int n,int &a,int &b){
    if(n%4==2) return 0; // if n≡2(mod4), we cannot find a and b such that n=a^2−b^2
    if(n%4!=0){    //n = ((n+1)/2)^2 - ((n-1)/2)^2;
        a=((n+1)/2)^2;
        b=((n-1)/2)^2;
    }
    else{    //n = ((n/4)+1)^2 - ((n/4)-1)^2;
        a=((n/4)+1)^2;
        b=((n/4)-1)^2;
    }
    return 1;
}
//***************************************************************

//************* Represent a number as sum of 2 Cube ***************
F(n) = a^3 + b^3 = (2n + 6n^2 + 6n^3 + n^4)^3 + (n + 3n^2 + 3n^3 + 2n^4)^3;
     = c^3 + d^3 = (1+4n+6n2+5n3+2n4)3+(−1 − 4n − 6n^2 − 2n^3 + n^4)^3;
//*****************************************************************

//********** rational number to P/Q formet converter***************

//j is the number of digits which repetd infinatly
//k is the number of non repeted digits placed before repeted digits
//n is the rational number < 1.
//this function will print the rational number as P/Q formet. 

void normal_ratio(int j,int k,double n){

    if(abs(n)<1e-10){
        printf(" 0/1\n");
        return;
    }


    ll lft=pow(10,k+j),rit=pow(10,k);
    double a = ((double)lft*n), b = ((double)rit*n);

    ll aa,bb,nu,dnu;
    if(j==0){
        a+=0.1;
        nu=a;dnu=lft;
    }
    else{
        a+=.1;
        aa=a,bb=b;
        aa-=bb;
    
        nu=aa,dnu=(lft-rit);
    }

    map<int,int> x=prime_factor(nu);
    map<int,int> y=prime_factor(dnu);

    for(auto &i : x){
        if(y.count(i.first)){
            if(i.second<=y[i.first]){
                y[i.first]-=i.second;
                i.second=0;
            }
            else{
                i.second-=y[i.first];
                y[i.first]=0;
            }
        }
    }

    ll ansl=1,ansr=1;

    for(auto i : x){
        ansl*=(pow(i.first,i.second));
    }
    for(auto i : y){
        ansr*=(pow(i.first,i.second));
    }
    printf(" %lld/%lld\n",ansl,ansr);
}
//************************************************************


//************** Eular Totent : Co-prime calculator ***********

//************ properties of eular phi *****************

The following properties of Euler totient function 
are sufficient to calculate it for any number:

If p is a prime number, then gcd(p,q)=1 for all (1 ≤ q < p) Therefore we have:
    ϕ(p) = p−1

If p is a prime number and k≥1, 
then there are exactly (p^k)/p numbers between 1 and p^k that are divisible by p. 
Which gives us:    ϕ(p^k) = p^k − p^(k−1).

If a and b are relatively prime, then:
    ϕ(ab) = ϕ(a) ⋅ ϕ(b)

This relation is not trivial to see. It follows from the Chinese remainder 
theorem. The Chinese remainder theorem guarantees, 
that for each 0≤x<a and each 0≤y<b, there exists a unique 0≤z<ab with 
z≡x(mod a) and z≡y(mod b). Its not hard to show that z is coprime to 
ab if and only if x is coprime to a and y is coprime to b. 
Therefore the amount of integers coprime to ab is equal to 
product of the amounts of a and b.

In general, for not coprime a and b, the equation
    ϕ(ab) = ϕ(a) ⋅ ϕ(b) ⋅ (d/ϕ(d));
where d = gcd(a,b).


**  ϕ(n)=ϕ(p1^a1)⋅ϕ(p2^a2) . . . ϕ(pk^ak)
        =(p1^a1 − p1^(a1−1)) ⋅ (p2^a2 − p2^(a2−1)) . . . (pk^ak − pk^(ak−1));

    Φ(n) = n * (1-(1/p1)) * (1-(1/p2))...(1-(1/pk));
    Φ(n) = (n-(n/p1)) - - - - (n-(n/pk));

or
**  Φ(n) = ((p^(a-1)) * (p-1)) * - - - ();
    Φ(12) = 2^((2-1)*(2-1)) * 3^((1-1)*(3-1)) = 4;


//******************sieve phi***********************
int phi[10000100];
void coprime(int n){
    for(int i=1;i<=n;i++)phi[i]=i;
    for(int i=2;i<=n;i++){
        if(phi[i] == i){
            for(int j = i ; j <= n ; j += i){
                phi[j] = (phi[j]/i) * (i-1);
                //phi[j] -= (phi[j]/i)
            }
        }
    }
}

//***** sum of all coprime of a number ******
sum_of_coprimes = (phi[n]/2)*n;


//******* count the number_of_pair < n with gcd equal to g *******

Since D must divide both i and j, you can divide everything through by D 
immediately and reduce to: how many pairs (k,ℓ) of integers such that
1≤k≤ℓ≤M have gcd(k,ℓ)=1, where M=⌊N/D⌋.

ll number_of_pair(ll n, ll g){
    n = n / g;
    return  phi[n];
}
//*************************************************************************


//***************** farmet & eular theorem ********************

when m is prime and (x,m) are co-prime;
according to Farmet theorem ... x^(m-1) % m = 1 ...

its also can be ezpressed as ... x^k % m = x^(k%(m-1)) % m ...

more generally Eular state that ... x^φ(m) % m = 1 ...

when m is prime according to Farmet ... φ(m) = m-1 ...

//****** ****** ****** ****** ****** ****** ****** ****** ****** 


//****************** Modular Exponentiation *******************

ll bigmod(ll base,ll power,ll mod){
    if(power==0)return 1;
    ll a = bigmod(pw/2);
    a=(a*a)%md;
    if(pw & 1)a=(a*bs)%md;
    return a;
}
//--------------------------------
ll modpow(ll x, ll n, ll mod) {
    if (!n) return 1 % mod;
    ll ret = modpow(x, n/2, mod);
    if (n&1) ret = ((ret%mod) * ret % mod * x%mod) % mod;
    else ret = (ret%mod * ret%mod) % mod;
    return ret;
}
//--------------------------------
ll exp(ll a,ll p,ll m){
    if(p==0)return 1;
    ll x = exp(a,p/2,m)%m;
    x = (x*x)%m;
    if(p&1)x = (x*(a%m))%m;
    return x;
}
//---------------------------------
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

//********************* GCD LCM ***********************

a * b = lcm * gcd;

int gcd(int a,int b){
    if(a%b==0)return b;
    return gcd(b,a%b);
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);  
}

ll extended_euclid(ll a, ll b, ll &x, ll &y){// egcd
    if(b==0)
    {
        x=1;y=0;
        return a;
    }
    ll x1,y1;
    ll temp=extended_euclid(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return temp;
}


//**************** Extended Euclid Algorithm : egcd ************************

//      q       r      x       y
//              a      1       0
//              b      0       1

int ext_gcd(int a, int b, int *X, int *Y) {
    int q1, r1 = a, x1 = 1, y1 = 0;
    int q2, r2 = b, x2 = 0, y2 = 1;
    while(r2 != 0) {
        int q = (r1 / r2), r = r1 - (q * r2), x = x1 - (q * x2), y = y1 - (q * y2);
        q1 = q2; r1 = r2; x1 = x2; y1 = y2;
        q2 = q; r2 = r; x2 = x; y2 = y;
    }
    *X = x1; *Y = y1;
    return r1;
}

int main() {      

    int a, b, x, y; 
    cin >> a >> b; 
    if(a < b) swap(a, b);
       
    int gc = ext_gcd(a, b, &x, &y);

    cout << "solution : (" << a << "*" << x << ") + (" << b << "*" << y << ") = " << gc << "\n"; 

    return 0;
}


//********** Farmet Little theorem : "Primility test" **********

farmet little theorem state that if p is a prime number then : 
(a^p % p = a)  or (a^(p-1) % p = 1) ......where (1<a<p),

bool farmet_prime(int p){
    if(p==2||p==3)return 1;
    if(p<=3)return 0;
    if(p%2==0)return 0;
    
    srand((unsigned)time(0));
    for(int i=0;i<10;i++){
        int r = (rand()%(p-3))+2;
        if(gcd(r,p)!=1)return 0;
        if(modpow(r,p-1,p)!=1)return 0;
    }
    return 1;
}
//***************************************************************

//******************* Modular Inverse **********************
int modinverse(int x,int mod){
    // (x * x^-1) % mod = 1
    // x^φ(mod) % mod = x * x^(φ(mod)-1) % mod = 1

    if(is_prime(mod)){
        // x^-1 = x^(mod-2)
        return modpow(x,mod-2,mod);
    }
    else if(gcd(x,mod)==1){
        // x^-1 = x^(φ(mod)-1)
        return modpow(x,phi[mod]-1,mod);
    }
    else return 0;
}
//*****************************************************************

//********** Miller Rabin : "Primility test" *********

ll exp(ll a,ll p,ll m){
    if(p==0)return 1;
    ll x = exp(a,p/2,m)%m;
    x = (x*x)%m;
    if(p&1)x = (x*(a%m))%m;
    return x;
}


bool miller_rabin(int p){
    if(p==2||p==3)return 1;
    if(p<=3)return 0;
    if(!(p%2))return 0;

    srand((unsigned)time(0));

    for(int i=0;i<11;i++){
        int r=(rand()%(p-3))+2;

        int s=p-1;
        while(!(s%2))s/=2;

        int mod=exp(r,s,p);
        if(mod==1 || mod==p-1)continue;

        int flg=0;
        while(s!=(p-1)){
            mod=exp(r,s,p);
            if(mod==(p-1)){
                flg=1;
                break;
            }
            s*=2;
        }
        if(!flg)return 0;
    }
    return 1;
}
//**************************************************************


//***** check a year is leap year or not *****
int isleap(int n) {
    if((n%4==0||n%400==0)&&n%100!=0)return 1;
    return 0;
}

//*************** day of week ************************
int day_of_week(int d,int m,int y){//first day 1 = Monday
    vector<int> v={31,28,31,30,31,30,31,31,30,31,30,31};
    if(isleap(y))v[1]++; y--;
    for(int i=1;i<v.size();i++)v[i]+=v[i-1];
    int day=((y*365)+(y/4)-(y/100)+(y/400));if(m-1)day+=v[m-2];
    return (day+d)%7;
}

//*****************************************************


//******* Number Conversion, Convert any base to any base ***************

string s;   //this is input
vector<char> v;  //this is output
ll todec(int n,int i,int p){
    if(i==s.size())return 0;
    if(s[i]>='0'&&s[i]<='9')return ((s[i]-48) * pow(n,p))+todec(n,i+1,p-1);
    else return ((s[i]-55) * pow(n,p))+todec(n,i+1,p-1);
}
void decto(ll n,int b){
    if(n<=0)return;
    char c;
    if(n%b<=9)c=(n%b)+48;
    else c=(n%b)+55;
    decto(n/b,b);
    v.push_back(c);
}
void anytoany(int a,int b){
    v=vector<char>();
    ll x=todec(a,0,s.size()-1);
    decto(x,b);
}

//***********************************************************

// represent a number as subtraction of 2 number

void n_equal__a_cube__minus__b_cube(ll n){
    //precan this part
    vector<lll> v;
    for(int i=1;i<2886755;i++){
        v.push_back((lll)i*i*i);
    }
    //__________________________

    bool flg=0;
    int x=0;

    for(int i=0;i<v.size();i++){
        while(x<v.size()){
            if(v[i]+n > v[x])x++;
            else break;
        }
        if(x==v.size())break;
        if(i+1<v.size()){if(v[i+1] - v[i] > n)break;}

        if(v[x] == (v[i]+n)){
            flg=1;
            printf("%d %d\n", x+1, i+1);
            break;
        }
    }

    if(!flg) printf("No solution\n");

    fflush(stdout);
}

//**********************************************************



///////////////////////////////////////////////////////////////////////////////////////////////
*********************************** Combinatorics *********************************************
///////////////////////////////////////////////////////////////////////////////////////////////



//********************** Combination ***************************

nCr = n! / ((n-r)! * r!);
nCr = (n-1)C(r-1) + (n-1)Cr;

//------------------------------------------

map<pair<int,int>,ll> mp; 
ll ncr(int n,int r){
    if(r==1)return n;
    if(n==r)return 1;
    ll a,b;

    if(mp[make_pair(n-1,r)])a=mp[make_pair(n-1,r)];
    else a=ncr(n-1,r); mp[make_pair(n-1,r)]=a;
    
    if(mp[make_pair(n-1,r-1)])a=mp[make_pair(n-1,r-1)];
    else b=ncr(n-1,r-1); mp[make_pair(n-1,r-1)]=b;
    
    return a+b;
}

//--------- Ncr using DP -------------------

ll ar[10000][10000];

// recursive
ll ncr(int n,int r){
    if(r==1)return n;
    if(n==r)return 1;
    ll a,b;

    if(ar[n-1][r])a=ar[n-1][r];
    else{
        a=ncr(n-1,r);
        ar[n-1][r]=a;
    }

    if(ar[n-1][r-1])b=ar[n-1][r-1];
    else{
        b=ncr(n-1,r-1);
        ar[n-1][r-1]=b;
    }

    return ar[n][r]=a+b;
}

// iterative

ll ncr(int n,int r){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=r;j++){
            if(j<=i){
                if(i==j)ar[i][j]=1;
                else if(j<=1)ar[i][j]=i;
                else ar[i][j]=ar[i-1][j]+ar[i-1][j-1];
            }
        }
    }
    return ar[n][r];
}

// ------ Naive ncr O(n) -------

ll C(ll n, ll r){
    int a=(n-r);
    ll ans=1;
    if(a>=r){
        int j=1;
        for(int i=a+1;i<=n;i++){
            ans*=i;
            if(j<=r){
                ans/=j;
                j++;
            }
        }
        while(j<=r){
            ans/=j;
            j++;
        }
    }
    else{
        int j=1;
        for(int i=r+1;i<=n;i++){
            ans*=i;
            if(j<=a){
                ans/=j;
                j++;
            }
        }
        while(j<=a){
            ans/=j;
            j++;
        }
    }
    return ans;
}

// -------- NcR using modular inversed -------------

ll fact[MAX+5];
ll invfact[MAX+5];

inline void precal_fact() {
    fact[0] = 1;
    for(ll i = 1; i <= MAX; i++) fact[i] = (fact[i-1] * i) % MOD;
    invfact[MAX] = exp(fact[MAX], MOD-2);
    for(int i = MAX-1; i >= 0; i--) invfact[i] = (invfact[i+1] * (i+1)) % MOD;
}

inline ll ncr(ll n, ll r) {
    if(r > n) return 0;
    ll ret = ((((fact[n] * invfact[n-r]) % MOD) * invfact[r]) % MOD);
    return ret;
}

//---------------------------------------------------


//***** Permutation ***************
nPr = n! / (n - r)!;


//******** number of way to represent a number as sum of integers *********

ll way(int n){
    if(n==1)return 1;
    int sum=1;
    for(int i=1;i<n;i++)sum+=way(i);
    return sum;
}
//formula 2^(n-1)

//*********************** Binomial Expression *******************

void binomial_expression(int n){
    for(int i=0;i<=n;i++){
        int co=(fact(n)/(fact(n-i)*fact(i)));

        if(i)printf(" + ");
        
        if(co!=1)printf("%d",co);
        if(n-i)printf("a^%d",n-i);
        if(i && n-i)printf(".");
        if(i)printf("b^%d",i);
    }
    printf("\n");
}


//*********************** Factorial *************************

ll fact(ll n){
    if(n==0)return 1;
    return n*fact(n-1);
}
//***********************************************************


//********************** Jacobsthal Number ************************
/*this sequence is like fibonacci sequence...
its starts with : 0 , 1 
then the n,th number is sum of ((n-1)th number and  ( (n-2)th number * 2));*/
Jacobsthal_Number(n) = Jacobsthal_Number(n-1) + 2*Jacobsthal_Number(n-2);



//********************** Dearangement number ***********************
/*
Derangement number is there are how many way to permutation n objects 
such that none of them take there real position.*/

ll de[1005];
ll dearange(ll n) {
    if(de[n] != -1) return de[n];
    return de[n] = multi((n-1), add(dearange(n-2), dearange(n-1)));
}
 

//******************** Catalan number ************************

//------------- 2d loop --------------
ll cat[120002];
MS0(cat);
cat[0] = cat[1] = 1;

for(int i = 2; i <= 10002; i++) {
    for(int j = 1; j <= i; j++) {
        cat[i] = add(cat[i], multi(cat[j-1], cat[i-j]));
    }
}

//-------------- formula --------------

ll cat(int n) {
    return multi(ncr(n+n, n), exp(n+1, MOD-2));
}


//********************* Stirling numbers *******************

//****** stirling number of 2nd kind ********
# explaination:
    "n" ta different object theke object nia 
    "k" size er koto ti non empty different 
    subset create kora jay?
# sol:

    int dp(int n, int k) {
        // n'th ball can be alone in the box
        int ret = dp(n-1, k-1);
        // n'th ball not alone in the box
        ret += dp(n-1, k) * k;
        return ret;
    }
//----------------------------------------------






//****** stirling number of 1st kind *********

stirling number of 1st kind is there are how many way to 
divide n objects into k Cycle.

str1(n,k) = str1(n-1,k-1) + (n-1)*str1(n-1,k);
base case : str1(n,1)=(n-1)!, str1(n,n)=1;

//---------------------------------------------------------
// n objects is given, you have to partition them in k set, how mane way to do that?

ll Stirling_numbers(int n,int k){
    int n1=n,k1=k;
    if(n<0)return 1;
    if(k<0)return 0;
    if(n==0 && k==0)return -1;
    if(n!=0 && n==k)return 1;
    if(n<k)return 0;
    ll tmp = Stirling_numbers(n1-1,k1);
    tmp = k1 * tmp;
    return (k1*(Stirling_numbers(n1-1,k1)))+Stirling_numbers(n1-1,k1-1);
}

//**********************************************************


////////////////////////////////////////////////////////////////////////////////////////////////
***************************************** GEOMETRY *****************************************
////////////////////////////////////////////////////////////////////////////////////////////////

//is given polygon is a regular polygon
if(360%(180-angle)==0)YES;
//***********************************

//distance between two point 2D/3D
D dis2d(D a,D b,D c,D d){return sqrt(((c-a)*(c-a))+((d-b)*(d-b)));}
D dis3d(D a,D b,D c,D d,D e,D f){return sqrt(((d-a)*(d-a))+((e-b)*(e-b))+((f-c)*(f-c)));}

//*************************
# area of equal sided triangle = a * (sqrt(3) / 4);
//*************************


//************************* Vector *****************************

***problem : tide & boat.
//speed of tide is u and speed of a boat is v which crossing the river
//to reach exact oposite corner what should be the angle of boat.
tanθ = (vsinα)/(U + vcosα);
=>tan90 = (vsinα)/(u + vcosα);
=>u + vcosα = 0;
=>cosα = -(u/v);
=>α = cos^-1(-(u/v));
time, t = d / (vsinα);


//*****Vector formula*****

* A . B = ABcosθ//value of dot product;
* A . B = ABcos(90) = 0 // if dot product of 2 vector is 0 then they prouduce a right angle;

* A x B = ABsinθ //value of cross product;
* right single angle on vector sarface = (A x B)/(|A x B|);
* A x B = 0;//if A||b then cross product of A & B is 0.
* A x B = ABsinθ;// area of samantorik is cross product of vector
* A x B = ABcosθ/2;//area of triangle

* we can express cross product of 2 vector by determinent
A = axi + ayj + azk;
B = bxi + byj + bzk;

A x B =i(ay*bz - az*by) - j(ax*bz - az*bx) + k(ax*by - ay*bx);

i   j   k
ax  ay  az
bx  by  bz

//********************Straight Line***************************

*** cartesian - polar : coordinate system ***
 p(x,y)=p(r,θ);
 r = sqrt(s^2 + y^2);
 x = r*cosθ;
 y = r*sinθ;
 θ = tan^-1(y/x);



//********************** Triangle *************************

** a,b,c is the three side of triangle and A,B,C is the 3 angle
**
* if a,b,c is given then A,B,C is.........
    cos(C) = (a^2 + b^2 - c^2) / 2ab;
    cos(A) = (b^2 + c^2 - a^2) / 2bc;
    cos(B) = (c^2 + a^2 - b^2) / 2ca;

//********************** Circle sigment *******************

** radius = height of sector + height of sector triangle;
          = (height of sector / 2) * (cord^2 / (8 * height of sector));
** 





//**********************************************************
ll max_dia_move(ll x,ll y,ll move){
    //this function will return maximum diagonal move 
    //to reach a point from (0,0) with given number of move
    //if not possible it will return -1.

    if(move<abs(x) || move<abs(y)){
        return -1;
    }
    else{
        ll dis=max(abs(x),abs(y));

        if(x%2==0 && y%2==0){
            if(move-dis>0){
                if(move%2!=0)return (move-2);
                else return move;
            }
            else return dis;
        }
        else if(x%2!=0 && y%2!=0){
            if(move-dis>0){
                if(move%2==0)return (move-2);
                else return move;
            }
            else return dis;
        }
        else return (move-1);
    }
}


//******** find the length of sides of cube from the area of serface *********

s1 = ab, s2 = bc, s3 = ca, are 3 serface and they are sharing a common vartex/corner of a cube.

length = a = sqrt((s1 * s3) / s2) 
hight = b = sqrt((s1 * s2) / s3)
width = c = sqrt((s2 * s3) / s1)



//***************** lattice polygon ********************

we are given two values:

B = number of lattice points on the boundary of the polygon
I = number of lattice points in the interior of the polygon

find the area of polygon...

Area = B/2 + I - 1


pair<pair<int,int>,pair<int,int> > cordinate_of_intersection(pair<pair<int,int>,pair<int,int> > x, pair<pair<int,int>,pair<int,int> > y){
    pair<pair<int,int>,pair<int,int> > ret;
    ret.first.first = max(x.first.first, y.first.first);
}


//*************** Area of polygon ***************

int X[1000005], Y[1000005];
 
ld area_of_polygon(int n){
    X[n] = X[0];    Y[n] = Y[0];
    ld area=0.0;
    for(int i=0;i<n;i++){
        area += ((X[i]*Y[i+1]) - (Y[i]*X[i+1]));
    }
    return abs(area / 2.0);
}

//*************** Check is a point on a line or not **************

bool on_line(int i, int j, int k) {
    return ((x[i]-x[j]) * (y[i]-y[k]) == (y[i]-y[j]) *(x[i] - x[k]));
}

// ************ area of triangle ********************************

int area_of_triangle(int a, int b, int c) {
    int p = (a + b + c) / 2;
    int area = sqrt(p * (p-a) * (p-b) * (p-c));
    return area;
}


//////////////////////////////////////////////////////////////////////////////////////////////
***************************** Search & SORT **************************************************
//////////////////////////////////////////////////////////////////////////////////////////////

//**************** Subset Genetaror **********************

//bit mathod
vector<int> v,ans;
void subset(){
    int lim=(1<<v.size());
    for(int i=0;i<lim;i++){
        for(int j=0;j<v.size();j++){
            if(i&(1<<j))cout<<v[j]<<" ";
        }
        cout<<endl;
    }
}

//recursive mathod
vector<int> v,ans;
void subset(int n){
    if(n==v.size()){
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";cout<<endl;
            return;
    }
    subset(n+1);
    ans.push_back(v[n]);
    subset(n+1);
    ans.pop_back();
}

//************* nqueen demo ******************
/*
(r1[x]==r2[x+y]==r3[x-y+n-1])
this is the most efficient diagonal chaeaking..
r1_________________
0 1 2 3
0 1 2 3
0 1 2 3
0 1 2 3
r2_________________
0 1 2 3
1 2 3 4
2 3 4 5
3 4 5 6
r3_________________
3 2 1 0
4 3 2 1
5 4 3 2 
6 5 4 3
*/
void Nqueen(int y){
    if(y==n){
        count++;
        return;
    }
    for(int x=0;x<n;x++){
        if(r1[x]==r2[x+y]==r3[x-y+n-1])continue;
        r1[x]==r2[x+y]==r3[x-y+n-1]=1;
        search(y+1);
        r1[x]==r2[x+y]==r3[x-y+n-1]=0;
    }
}


//***************** Binary Search *********************

int binary_search1(int x,int lo,int hi){
    if(lo>hi)return 0;
    int mid=(lo+hi)/2;
    
    if(v[mid]==x)return mid;
    else if(v[mid]>x)bs1(x,lo,mid-1);
    else bs1(x,mid+1,hi);
}

int binary_search2(int x,int j,int i){
    if(j<=0)return i;
    while(i+j<v.size() && v[i+j]<=x)i+=j;
    
    bs2(x,j/2,i);
}

#define ubound(v,x) (upper_bound(all(v),x)-v.begin())
#define lbound(v,x) (lower_bound(all(v),x)-v.begin())
//----------------------------------------------------

//__________Ternary Search_____________

double ternary_search(double l, double r) {
    double eps = 1e-9;              //set the error limit here
    while (r - l > eps) {
        double m1 = l + (r - l) / 3;
        double m2 = r - (r - l) / 3;
        double f1 = f(m1);      //evaluates the function at m1
        double f2 = f(m2);      //evaluates the function at m2
        if (f1 < f2)
            l = m1;
        else
            r = m2;
    }
    return f(l);                    //return the maximum of f(x) in [l, r]
}

//----------------------------------------------------


//_______ Marge Sort _______

int arr[1000000],tmp[1000000];
void margesort(int lo,int hi){
    if(lo==hi)return;
    int mid=(lo+hi)/2;
    margesort(lo,mid);
    margesort(mid+1,hi);
    for(int i=lo,j=mid+1,k=lo;k<=hi;k++){
        if(i==mid+1)tmp[k]=arr[j++];
        else if(j==hi+1)tmp[k]=arr[i++];
        else if(arr[i]<arr[j])tmp[k]=arr[i++];
        else tmp[k]=arr[j++];
    }
    for(int i=lo;i<=hi;i++)arr[i]=tmp[i];
}

//_______ Quick sort ________

int ar[1000005];
void quick_sort(int lo, int hi)  {
    if(lo >= hi) return;
 
    int i = lo, j = lo;
    for(; j < hi; j++) {
        if(ar[j] <= ar[hi]) {
            swap(ar[i], ar[j]);
            i++;
        }
    }
    swap(ar[i], ar[hi]);
 
    quick_sort(lo, i-1);
    quick_sort(i+1, hi);
}
 


//////////////////////////////////////////////////////////////////////////////////////////////
*************************** Data Stracture **************************************************
//////////////////////////////////////////////////////////////////////////////////////////////

// Histogram -- get maximum rectangle
int histogram(vector<int> v,int n){
    vector<int> lft(n,1),rit(n,1);
    stack<pair<int,int> > st;
 
    for(int i=0;i<n;i++){
        while(st.size()){
            if(st.top().first>=v[i]){
                lft[i]+=lft[st.top().second];
                st.pop();
            }
            else break;
        }
        st.push(make_pair(v[i],i));
    }
 
    st = stack<pair<int,int> >();
 
    for(int i=n-1;i>=0;i--){
        while(st.size()){
            if(st.top().first>=v[i]){
                rit[i]+=rit[st.top().second];
                st.pop();
            }
            else break;
        }
        st.push(make_pair(v[i],i));
    }
 
    int mx=0;
    for(int i=0;i<n;i++)mx = max(mx,(lft[i]+rit[i]-1)*v[i]);
    return mx;
}
//******************************************************************


//************** Evaluate arithmetic expression **********************

//infix to prefix -------------------------

string infixtoprefix(string infix){
    map<char,int> mp;
    mp['-']=mp['+']=1;
    mp['/']=mp['*']=2;
    mp['^']=3;

    stack<char> operators;
    stack<string> operands;

    for(int i=0;i<infix.size();i++){
        if(infix[i]=='(')operators.push(infix[i]);
        else if(infix[i]==')'){
            while(operators.size() && (operators.top()!='(')){
                string x=operands.top();
                operands.pop();
                string y=operands.top();
                operands.pop();
                char z=operators.top();
                operators.pop();

                string tmp=z+y+x;
                operands.push(tmp);
            }
            operators.pop();
        }
        else if(!isoperator(infix[i])){
            operands.push(string(1,infix[i]));
        }
        else{
            while(operators.size() && mp[infix[i]]<=mp[operators.top()]){
                string x=operands.top();
                operands.pop();
                string y=operands.top();
                operands.pop();
                char z=operators.top();
                operators.pop();

                string tmp=z+y+x;
                operands.push(tmp);    
            }
            operators.push(infix[i]);
        }
    }
    while(operators.size()){
        string x=operands.top();
        operands.pop();
        string y=operands.top();
        operands.pop();
        char z=operators.top();
        operators.pop();

        string tmp=z+y+x;
        operands.push(tmp);    
    }
    return operands.top();
}

//infix to postfix -----------------------------

string postfix(string s){
    map<char,int> mp;mp['+']=mp['-']=1;mp['*']=mp['/']=2;
    s.insert(s.begin(),'(');
    s+=')';

    string ans;
    stack<int> op;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')op.push(s[i]);
        else if(s[i]==')'){
            while(op.top()!='('){
                ans+=op.top();
                op.pop();
            }
            op.pop();
        }
        else if(isoperator(s[i])){
            while(op.top()!='(' && mp[op.top()]>=mp[s[i]]){
                ans+=op.top();
                op.pop();
            }
            op.push(s[i]);
        }
        else ans+=s[i];
    }
    return ans;
} 

//postfix to arithmatic parse tree
struct node{
    char val;
    struct node *left;
    struct node *right;
    node(){
        left=NULL;
        right=NULL;
    }
};
typedef struct node node;

node * arithmatic_parse_tree(string s){
    stack<node*> st;
    for(int i=0;i<s.size();i++){
        node *p=new node();
        p->val=s[i];
        if(!isdigit(s[i]) && !isalpha(s[i])){
            p->right=st.top();
            st.pop();
            p->left=st.top();
            st.pop();
            st.push(p);
        }
        else st.push(p);
    }
    return st.top();
}

//parse tree to infix

string infixstr;
void parse_to_infix(node *p){
    if(p==NULL)return;
    if(!isdigit(p->val) && !isalpha(p->val))infixstr+='(';
    parse_to_infix(p->left);
    infixstr+=p->val;
    parse_to_infix(p->right);
    if(!isdigit(p->val) && !isalpha(p->val))infixstr+=')';
}

//evaluate from postfix

int evalute_postfix(string s){
    stack<int> st;
    for(int i=0;i<s.size();i++){
        if(!isdigit(s[i]) && !isalpha(s[i])){
            int b=st.top();st.pop();
            int a=st.top();st.pop();
            
            if(s[i]=='+')st.push(a+b);
            else if(s[i]=='-')st.push(a-b);
            else if(s[i]=='*')st.push(a*b);
            else if(s[i]=='/')st.push(a/b);
        }
        else st.push(s[i]-48);
    }
    return st.top();
}
//*************************************************************

//******************* DSU : disjoint set uniun ********************

int find(int x){
    if(arr[x]==x)return x;
    return arr[x] = find(arr[x]);
}

void uniun(int a,int b){
    arr[find(b)]=find(a);
}


//******************** 2d Cumulative Sum *********************

int cumulative_sum(vector<vector<int> > arr2d,int a,int b,int c,int d){
    vector<vector<int> > sum(10,vector<int>(10,0));

    for(int i=1;i<arr2d.size();i++){
        for(int j=1;j<arr2d[i].size();j++){
            sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+arr2d[i][j];
        }
    }

    int ans = sum[c][d]-sum[a-1][d]-sum[c][b-1]+sum[a-1][b-1];
    return ans;
}

// zero indexed
vector<vector<ll> > cuarr;

struct cumulative_sum {

    inline cumulative_sum() {
        int xlen = cuarr.size(), ylen = cuarr[0].size();

        for(int i = 0; i < xlen; i++) {
            for(int j = 0; j < ylen; j++) {

                cuarr[i][j] += ((i?cuarr[i-1][j]:0) + (j?cuarr[i][j-1]:0) - ((i&&j)?cuarr[i-1][j-1]:0));
            }
        }
    }

    inline ll cusum(int a, int b, int c, int d) {
        return (cuarr[c][d] - (a?cuarr[a-1][d]:0) - (b?cuarr[c][b-1]:0) + ((a&&b)?cuarr[a-1][b-1]:0));
    }
};


//*********************** Trie ****************************

// Trie :: general peopose template

struct node{
    int end; 
    int path;
    node *next[26];
    node(){
        path = 0;
        end = 0;
        for(int i = 0; i < 26; i++){
            next[i] = NULL;
        }
    }
};

struct my_trie {
    node *root;
    char smallest_ch;

    my_trie(char ch) {
        root = new node();
        smallest_ch = ch;
    }

    bool insert(string s) {
        node *now = root;

        for(int i = 0; i < s.size(); i++) {
            int id = s[i] -  smallest_ch;
        
            if(now->next[id] == NULL){
                now->next[id] = new node();
            }

            now = now->next[id];
            now->path++;
        }
        now->end++;

        return (now->path > 1);
    }

    bool search(string s) {
        node *now = root;
        
        for(int i = 0; i < s.size(); i++){
            int id = s[i]- smallest_ch;

            if(now->next[id] == NULL) return 0;
            now = now->next[id];
        }
        if(now->end) return 1;
        return 0;
    }

    void erase(string s) {
        if(search(s) == 0) return;

        node *now = root;

        for(int i = 0; i < s.size(); i++) {
            int id = s[i] -  smallest_ch;
        
            now = now->next[id];
            now->path--;
        }
        now->end--;
    }

    void del(node *now){
        for(int i = 0; i < 26; i++){
            if(now->next[i] != NULL){
                del(now->next[i]);
            }
        }
        delete(now);
    }
};




//******** maximum and minimum sub array XOR ********

ll power[50];
 
struct node{
    bool flg;
    node *nxt[2];
    node(){
        flg=false;
        for(int i=0;i<2;i++)nxt[i] = NULL;
    }
};
 
void insert(node *cur, ll mask){
    for(int i=31; i>=0; i--){
        bool id = check_bit(mask,i);
        if(!cur->nxt[id])cur->nxt[id] = new node();
        cur = cur->nxt[id];
    }
    cur->flg = true;
}
 
ll query_mx(node *cur, ll mask){
    ll ret=0;
    for(int i=31; i>=0; i--){
        bool id = check_bit(mask, i);
        if(cur->nxt[id^1]){
            ret += power[i];
            cur = cur->nxt[id^1];
        }
        else cur = cur->nxt[id];
    }
    return ret;
}
 
ll query_mn(node *cur, ll mask){
    ll ret=0;
    for(int i=31; i>=0; i--){
        bool id = check_bit(mask, i);
        if(cur->nxt[id]) cur = cur->nxt[id];
        else{ 
            ret += power[i];
            cur = cur->nxt[id^1];
        }
    }
    return ret;
}
 
int main(){
    power[0]=1;
    for(int i=1;i<=33;i++)power[i] = power[i-1]*2;
 
    int t, tst=1;
    scanf("%d", &t);
    while(t--){
        node *root = new node();
 
        int n;
        scanf("%d",&n);
 
        ll x_or = 0, val, mx = -(1l<<55), mn = (1l<<55);
        insert(root, x_or);
 
        for(int i=0; i<n; i++){
            scanf("%lld", &val);
            x_or = x_or ^ val;
            mx = max(mx, query_mx(root, x_or));
            mn = min(mn, query_mn(root, x_or));
            insert(root, x_or);
        }
        del(root);
 
        printf("Case %d: %lld %lld\n", tst++, mx, mn);
    }
    return 0;
}

//******** number of subarray with xor less then X ********

struct node{
    int cnt;
    node *nxt[2];
    node(){
        cnt=0;
        for(int i=0;i<2;i++)nxt[i]=NULL;
    }
};
 
void insert(ll mask, node *cur){
    for(int i=31;i>=0;i--){
        bool id = check_bit(mask, i);
        if(cur->nxt[id] == NULL)cur->nxt[id] = new node();
        cur = cur->nxt[id];
        cur->cnt++;
    }
}
 
 
ll search(node *cur, ll mask, ll k){
    ll ans=0;
    for(int i=31;i>=0;i--){
        bool id1 = check_bit(mask, i);
        bool id2 = check_bit(k, i);
        if(cur->nxt[id1^1] && id2){
            if(cur->nxt[id1])ans += cur->nxt[id1]->cnt;
            cur = cur->nxt[id1^1];
        }
        else if(cur->nxt[id1^1]){
            if(cur->nxt[id1])cur = cur->nxt[id1];
            else break;
        }
        else if(cur->nxt[id1] && id2){
            ans += cur->nxt[id1]->cnt;
            break;
        }
        else{
            if(cur->nxt[id1])cur = cur->nxt[id1];
            else break;      
        }
 
    }
 
    return ans;
}
 

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        node *root = new node();
 
        ll n, k;
        scanf("%lld %lld",&n, &k);
 
        ll x_or=0, ans=0, x;
 
        insert(x_or, root);
 
        for(int i=0;i<n;i++){
            scanf("%lld",&x);
            x_or = x_or ^ x;
            ans += search(root, x_or, k);
            insert(x_or, root);
        }
 
        printf("%lld\n", ans);
 
        del(root);
    }
    return 0;
}
//****************************************************************


//************* Segment tree : with & without lazy ***************

//the max length of segment tree is 2x(nearest power of 2 near n) - 1
int len = pow(2,(int)(ceil(sqrt(n))) + 1) - 1;
//--------------------------------------------------


void build(int now, int lo, int hi){
    if(lo == hi){
        node[now] = ar[lo];
        return;
    }
    int mid = (lo + hi) / 2;

    build(now*2, lo, mid);
    build((now*2)+1, mid+1, hi);

    node[now] = node[now*2] + node[(now*2)+1];
}

void update(int now, int lo, int hi, int idx, int val){
    if(lo == hi){
        node[now] = val;
        ar[idx] = val;
        return;
    }    
    int mid  = (lo+hi)/2;
    if(idx <= mid)update(now*2, lo, mid, idx, val);
    else if(idx > mid)update((now*2)+1, mid+1, hi, idx, val);
    
    node[now] = node[now*2] + node[(now*2)+1];
}

int query(int now, int lo, int hi, int l, int r){
    if(lo == l && hi == r){
        return node[now];
    }
    int mid = (lo+hi)/2;
    if(r <= mid)return query(now*2, lo, mid, l, r);
    else if(l > mid)return query((now*2)+1, mid+1, hi, l, r);
    else{ 
        int x = query(now*2, lo, mid, l, mid);
        int y = queary((now*2)+1, mid+1, hi, mid+1, r);
        return x+y;
    }
}


// ----- Segment tree lazy update -----

void propagate(int now, int l, int r){
    if(l != r){
        node[now] += lazy[now];
        lazy[now*2] += lazy[now];
        lazy[(now*2)+1] += lazy[now];
        lazy[now] = 0;
    }
    else{
        if(lazy[now]){
            node[now] += lazy[now];
            lazy[now] = 0;
        }
    }
}

void update(int now, int lo, int hi, int l, int r, int val){
    propagate(now, lo, hi);

    if(lo==l && hi==r) {
        lazy[now] += val;
        propagate(now, lo, hi);
        return;
    }

    int mid = (lo+hi)/2;
    if(r <= mid){
        update(now*2, lo, mid, l, r, val);
        propagate((now*2)+1, mid+1, hi);
    }
    else if(l > mid){
        update((now*2)+1, mid+1, hi, l, r, val);
        propagate(now*2, lo, mid);
    }
    else{
        update(now*2, lo, mid, l, mid, val);
        update((now*2)+1, mid+1, hi, mid+1, r, val);
    }

    node[now] = max(node[now*2], node[(now*2)+1]);
}

int query(int now, int lo, int hi, int l, int r) {
    propagate(now, lo, hi);

    if(lo == l && hi == r){
        return node[now];
    }

    int mid = (lo+hi)/2;
    
    if(r <= mid)return query(now*2, lo, mid, l, r);
    else if(l > mid)return query((now*2)+1, mid+1, hi, l, r);
    else{ 
        int x = query(now*2, lo, mid, l, mid);
        int y = query((now*2)+1, mid+1, hi, mid+1, r);
        return max(x,y);
    }
}


//************* Print the postorder traversal of 
//a binary tree from pre & inorder traversal **************

string a, b;
struct node{
    char ch;
    node *nxt[2];
};

int pos;
void build(node *cur, int l, int r){
    if(l == r){
        cur->ch = b[l]; 
        return;
    }
    int mid;
    for(int i=l;i<=r;i++){
        if(b[i] == a[pos]){
            mid = i;
            break;
        }
    }
    cur->ch = b[mid];
    if(l <= mid-1){
        pos++;
        cur->nxt[0] = new node();
        build(cur->nxt[0], l, mid-1);
    }
    if(mid+1 <= r){
        pos++;
        cur->nxt[1] = new node();
        build(cur->nxt[1], mid+1, r);
    }
}
cin>>a>>b;
node *root = new node();
pos = 0;
build(root, 0, b.size()-1);
print_postorder(root);



//**************** min heap implementation ******************************
class min_pq{

private:
    vector<int> _pq;
    void heap_down(int now) {
        while(1){
            int check = now;
            if(now*2 < _pq.size() && _pq[now*2] < _pq[check]) check = now*2;
            if((now*2)+1 < _pq.size() && _pq[(now*2)+1] < _pq[check]) check = (now*2)+1;
            if(check == now) break;
            swap(_pq[now], _pq[check]);
            now = check;
        }
    }
    void heap_up(int now) {
        while(now != 1 && _pq[now/2] > _pq[now]) {
            swap(_pq[now/2], _pq[now]);
            now /= 2;
        }
    }

public:
    min_pq() {
        _pq = {0};
    }
    min_pq(vector<int> _in) {
        _pq = {0};
        for(auto i : _in) _pq.push_back(i);
        for(int i = _pq.size()/2; i >= 1; i--) heap_down(i);
    }
    
    void push(int val) {
        _pq.push_back(val);
        heap_up(_pq.size()-1);
    }

    int top() {
        if(_pq.size() == 1) return -1;
        return _pq[1];
    }

    int pop() {
        if(_pq.size() == 1) return -1;
        int ret = _pq[1];
        swap(_pq[1], _pq.back());
        _pq.pop_back();
        heap_down(1);
        return ret;
    }

    int size() {
        return _pq.size()-1;
    }
};

int main() {

    vector<int> v = {5,4,3,2,1,9,8,7,6};
    min_pq pq = min_pq(v);

    while(pq.size()) cout << pq.pop() << " ";
    cout << endl;

    pq.push(12323);
    pq.push(45);
    pq.push(46);
    cout << "size = " << pq.size() << endl;
    cout << pq.pop() << endl;
    cout << pq.pop() << endl;
    cout << pq.top() << endl;
}

// ************************* Sqrt decomposition *********************************

// range sum qeary - without lazy
int bucket_size;
vi ar, bucket;

void create(int n) {
    bucket_size = sqrt(n)+1;
    bucket = vi(bucket_size);
    ar = vi(n);
    for(int i = 0; i < n; i++) {
        ar[i] = II;
    }
}

int bucket_no(int x) {
    return (x / bucket_size);
}

int range_left(int x) {
    return (((x+bucket_size)/bucket_size) * bucket_size);
}

int range_right(int x) {
    return ((((x-bucket_size)/bucket_size) * bucket_size) + bucket_size - 1);
}

void build(int n) {
    for(int i = 0; i < n; i++) {
        bucket[bucket_no(i)] += ar[i];
    }
}

void process_queary(int q) {
    while(q--) {
        int x = II, y;
        if(x == 1) {
            x = II;
            bucket[bucket_no(x)] -= ar[x];
            printf("%d\n", ar[x]);
            ar[x] = 0;
        }
        else if(x == 2) {
            x = II; y = II;
            bucket[bucket_no(x)] += y;
            ar[x] += y;
        }
        else {
            x = II; y = II;
            int sum = 0;

            int lo = range_left(x), hi = range_right(y);
            
            if(bucket_no(lo) > bucket_no(hi)) {
                for(int i = x; i <= y; i++) sum += ar[i];
            }
            else{
                for(int i = x; i < lo; i++) sum += ar[i];
                for(int i = hi+1; i <= y; i++) sum += ar[i];

                int l = bucket_no(lo), r = bucket_no(hi);
                while(l <= r) {
                    sum += bucket[l];
                    l++;
                }
            }
    
            printf("%d\n", sum);
        }
    }
}

int main() {

    TEST_CASE {
        int n = II, q = II;
        
        create(n);
        build(n);

        PRINT_CASEN;
        process_queary(q);
    }

    return 0;
}

// range sum query - with lazy update

int bucket_size;
struct bucket_data{
    ll val, lazy;
    bucket_data() {
        val = lazy = 0;
    }
};
vl ar;
vector<bucket_data> bucket;

void create(int n) {
    bucket_size = sqrt(n)+1;
    bucket = vector<bucket_data>(bucket_size);
    ar = vl(n);
}

int bucket_no(int x) {
    return (x / bucket_size);
}

int range_left(int x) {
    return (((x+bucket_size)/bucket_size) * bucket_size);
}

int range_right(int x) {
    return ((((x-bucket_size)/bucket_size) * bucket_size) + bucket_size - 1);
}

void propagate(int x) {
    int l = (x * bucket_size), r = (x * bucket_size) + bucket_size - 1;
    bucket[x].val = 0;
    for(int i = l; i <= r; i++) {
        ar[i] += bucket[x].lazy;
        bucket[x].val += ar[i];
    }
    bucket[x].lazy = 0;
}

void update(int a, int b, int x) {
    int lo = range_left(a), hi = range_right(b);
    int l = bucket_no(lo), r = bucket_no(hi);

    propagate(bucket_no(a));
    propagate(bucket_no(b));

    if(lo > hi) {        
        for(int i = a; i <= b; i++) {
            ar[i] += x;
            bucket[bucket_no(i)].val += x;
        }
    }
    else{
        for(int i = a; i < lo; i++) {
            ar[i] += x;
            bucket[bucket_no(i)].val += x;
        }
        for(int i = hi + 1; i <= b; i++)  {
            ar[i] += x;
            bucket[bucket_no(i)].val += x;
        }
        for(int i = l; i <= r; i++) {
            bucket[i].lazy += x;
            bucket[i].val += (x * bucket_size);
        }
    }
}

void solve(int a, int b) {
    int lo = range_left(a), hi = range_right(b);
    int l = bucket_no(lo), r = bucket_no(hi);

    propagate(bucket_no(a));
    propagate(bucket_no(b));

    ll sum = 0;
    if(lo > hi) {
        for(int i = a; i <= b; i++) sum += ar[i];
    }
    else{
        for(int i = a; i < lo; i++) sum += ar[i];
        for(int i = hi+1; i <= b; i++) sum += ar[i];
        for(int i = l; i <= r; i++) sum += bucket[i].val;
    }
    printf("%lld\n", sum);
}

void process_query(int q) {
    while(q--) {
        int x = II, a, b;
        if(x == 0) {
            a = II; b = II; x = II; 
            update(a, b, x);
        }
        else {
            a = II; b = II;
            solve(a, b);
        }
    }
}

int main() {

    TEST_CASE{
        int n = II, q = II;
        create(n);

        PRINT_CASEN;
        process_query(q);
    }

    return 0;
}

// total qunique integer in a range l - r
// mo's algo

int bucket_size;
struct bucket_data{
    int l, r, l_buc, idx;
    bucket_data(int _l, int _r, int _idx) {
        l = _l; r = _r; 
        l_buc = l / bucket_size;
        idx = _idx;
    }
};
vi ar;

bool cmp(bucket_data x, bucket_data y) {
    if(x.l_buc == y.l_buc) {
        if(x.l_buc & 1) return (x.r > y.r);
        else return (x.r < y.r);
    }
    return (x.l_buc < y.l_buc);
}

int lo, hi, ans;
vi frq(1000005);

inline void add(int x) {
    frq[x]++;
    if(frq[x] == 1) ans++;
}

inline void remove(int x) {
    frq[x]--;
    if(frq[x] == 0) ans--;
}

inline int solve(int l, int r) {
    while(lo < l) {
        remove(ar[lo]); lo++;
    }
    while(lo > l) {
        lo--; add(ar[lo]);
    }
    while(hi < r) {
        hi++; add(ar[hi]);
    }
    while(hi > r) {
        remove(ar[hi]); hi--;
    }
    return ans;
}


int main() {

    int n = II;
    bucket_size = sqrt(n) + 1;

    ar = vi(n);
    vsc(ar, n);

    int q = II;
    vector<bucket_data> qry;

    for(int i = 0; i < q; i++) {
        int l = II, r = II;
        qry.push_back(bucket_data(l-1, r-1, i));
    }
    sort(all(qry), cmp);

    lo = hi = 0;
    frq[ar[0]]++;
    ans = 1;

    vi ans(q);
    for(int i = 0; i < q; i++) {
        ans[qry[i].idx] = solve(qry[i].l, qry[i].r);
    }
    for(int i = 0; i < q; i++) printf("%d\n", ans[i]);

    return 0;
}

// mo's algo
// CF 617 E. XOR and Favorite Number


ll bucket_size;
struct bucket_data{
    ll l, r, idx, l_buc;
    bucket_data(ll a, ll b, ll c) {
        l = a; r = b; idx = c; l_buc = a / bucket_size;
    }
};
vi ar;

bool cmp(bucket_data x, bucket_data y) {
    if(x.l_buc == y.l_buc) {
        if(x.l_buc & 1) return x.r > y.r;
        else return x.r < y.r;
    }
    return x.l_buc < y.l_buc;
}

ll ans = 0;
vl frq(10000005,0);
ll lo, hi, k;

void add(ll x) {
    ans += frq[x ^ k];
    frq[x]++;
}

void remove(ll x) {
    frq[x]--;
    ans -= frq[x ^ k];
}

void solve(ll l, ll r) { 

    while(hi < r) {
        hi++; add(ar[hi]);
    }
    while(hi > r) {
        remove(ar[hi]);
        hi--;
    }
    while(lo < l) {
        remove(ar[lo]);
        lo++;
    }
    while(lo > l) {
        lo--;
        add(ar[lo]);
    }
}

int main() {

    ll n, q; 
    cin >> n >> q >> k;
        
    bucket_size = sqrt(n) + 1;
    ar = vi(n+1);
    
    for(ll i = 1; i <= n; i++) {
        cin >> ar[i]; ar[i] = ar[i] ^ ar[i-1];
    }

    vector<bucket_data> qry;
    for(ll i = 0; i < q; i++) {
        ll l, r; cin >> l >> r;
        qry.push_back(bucket_data(l-1, r, i));
    }
    sort(all(qry), cmp);

    lo = hi = 0;
    add(0);

    vi sol(q);
    for(ll i = 0; i < q; i++) { 
        
        solve(qry[i].l, qry[i].r);
        sol[qry[i].idx] = ans;
    }

    for(ll i = 0; i < q; i++) cout << sol[i] << "\n";

    return 0;
}

// screenshot technique

int n;
vi adj[100005];
int height[100005];
ll val[100005];


inline void calculate_height(int u, int prv) { 
    stack<pii> st;
    st.push({u, prv});

    while(st.size()) {
        pii tp = st.top(); st.pop();
        u = tp.ff; prv = tp.ss;
        for(auto v : adj[u]) {
            if(v != prv) {
                height[v] = height[u] + 1;
                st.push({v, u});
            }
        }
    }
}

inline ll update(int u, int prv) {
    ll ret = 0;
    for(auto v : adj[u]) {
        if(v != prv) {
            ret = add(ret, update(v, u));
        }
    }
    if(ret == 0) return val[u];
    val[u] = ret;
    return add(ret, ret);
}

vii buffer;
inline void take_screenshot() {
    for(auto i : buffer) {
        val[i.ff] = add(val[i.ff], i.ss);
    }
    buffer = vii();
    update(1, -1);
}

vi intime(100005);
vi outime(100005);
int timer;

inline void set_time(int u, int prv) {
    timer++;
    intime[u] = timer;
    for(auto v : adj[u]) {
        if(v != prv) set_time(v, u);
    }
    timer++;
    outime[u] = timer;
}

inline bool is_in_subtree(int u, int v) {
    if(intime[u] <= intime[v] && outime[u] >= outime[v]) return 1;
    return 0;
}

int main() {

    TEST_CASE {
        printf("Case %d:\n", cs);

        n = II;
        for(int i = 0; i <= n; i++) {
            adj[i].clear();
            val[i] = height[i] = 0LL;
        }
        buffer = vii();

        for(int i = 1; i < n; i++) {
            int x = II, y = II;

            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        calculate_height(1, -1);

        timer = 0;
        set_time(1, -1);

        int q = II, cnt = 0, lim;
        lim = sqrt(q)+1;

        while(q--) {
            if(cnt == lim) {
                cnt = 0;
                take_screenshot();
            }
            ll x = LL, y;

            if(x == 1) {
                x = LL;
                ll ans = val[x];
                for(auto i : buffer) {
                    if(is_in_subtree(x, i.ff)) {

                        ans = sub(ans, multi(exp(2, (height[i.ff] - height[x] - 1)), val[i.ff]));
                        ans = add(ans, multi(exp(2, (height[i.ff] - height[x] - 1)), add(val[i.ff], i.ss)));
                    }
                }
                printf("%lld\n", ans);
            }
            else {
                x = II; y = II;
                buffer.push_back({x,y});
            }

            cnt++;
        }
    }

    return 0;
}


// *******************************************************************************************



//////////////////////////////////////////////////////////////////////////////////////////////
********************************** BitWise Technic ****************************************
//////////////////////////////////////////////////////////////////////////////////////////////
//to cheak a number is power of two or not
int ispowof2(int n){
    if((n & (n - 1)) == 0) return 1;
}

//Convert UpperCase to LowerCase
char casechanger(char c){
    if(c>='a' && c<='z')return c & ~32;
    else return c|32;
}

//swaping two number by X-or
a ^= b;
b ^= a;
a ^= b;

//in a list of number all number are given even time one number is given odd time find that number.
sol: X-OR All numbers;

//A large list of smaller case alphabet is given which characters are appear odd times
sol: take a integer variable. iterate over list and toogle nth bit of int variable.
     finally which bits are on, thats are our ans;


// Reverse all bits of an integer
void reverse_all_bits(int x){
    x = ((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1);
    x = ((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2);
    x = ((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4);
    x = ((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8);
    x = ((x & 0xffff0000) >> 16) | ((x & 0x0000ffff) << 16);
    return x;
}

// Count the total ON bits of a number
int x;
__builtin_popcount(x); // for -> int
__builtin_popcountl(x); // for -> long int
__builtin_popcountll(x); // for -> long long


// Average of 2 number -> there is no risk of overflow
int avg(int x, int y){
    return (x&y)+((x^y)>>1);
}

// Maximum xor of to number in a range 
int max_xor_in_range(int l, int r) {
    l = l ^ r; r = 1;   
    
    // after xor, left most on bit is the 
    // bit where 0,1 occer in l and r, 
    // after then we can make all bit 1.
    
    int cnt = 0;
    while(l) {
        cnt++;
        l >>= 1;
    }
    int ret = 0;
    while(cnt--){
        ret += r; r <<= 1;
    }
    return ret;
}

// 


//****************************************************************************************

//////////////////////////////////////////////////////////////////////////////////////////////
******************************* STL Technique **********************************************
//////////////////////////////////////////////////////////////////////////////////////////////

//fast read int
void read(int &x) {
    x = 0; char c = getchar();
    while(c>='0' && c<='9')
        x = (x<<3) + (x<<1) + (c-'0'), c = getchar();
}

// Operator Overloding : for define how "<" operatr should work
bool operator<(const MyStruct &a, const MyStruct &b){
  if(a < b)return true; 
  else if(a >= b)return false;
}

// operator checker 
bool isoperator(char c){
    return (!isalpha(c) && !isdigit(c));
}

//reverse elements of any container
reverse(v.begin(),v.end()); 

//next permutation of elements
next_permutation(v.begin(),v.end()); 

//previous permutation of elements
prev_permutation(v.begin(),v.end()); 

//generate words from a given string
string str="aa bb cc",word;
stringstream s(str);
while(s >> word){
    cout<<word<<"\n";
}

//set leading zero in cout
int num=122;
cout<<stfill('0')<<setw(5)<<num<<"\n";//out: 00122

//output with fixed length & pricition.
double x=32.3434345545454;
printf("%010.3lf\n",x);

//Shuffle elements of comtainer
random_shuffle(v.begin().v.end());

//declare register variable for frequently use
register int x;

//priority queue with greater priority;
priority_queue<int,vector<int>,greater<int> > Q;

//copy a fixed number of element from a fixed container to another
vector<int> sorce={1,2,3},terget;
copy_n(sorce,n,terget);

//Assign value in container in inrement order
int a[10]={0};
char c[10]={0};
iota(a,a+5,10)//data will be inserted as {10,11,12,13,14};
iota(c,c+4,'a')//data will be inserted as {'a','b','c','d'};

//check all element of container is positive or not.
all_of(v.begin(),v.end(),ispositive());

//check is there any positive element in container.
any_of(v.begin(),v.end(),ispositive());

//find GCD of two number
int x,y;
__gcd(x,y);

//to push back element calling by base constractor use it.
v.emplace_back(4,5);

//Cpp TAMPLATE
//tamplate used for Generilize the datatype for a function.
template<class T>
void fun(T x){
    cout<<x<<"\n";
    //now its not matter that x is from which datatype
}

//set precission in run time
cout<<fixed<<setprecision(n)<<acos(-1.0)<<"\n";
or
printf("%.*lf\n",n,acos(-1.0));

//find in container
if(find(v.begin(),v.end(),item)!=v.end())found;

//find substring
string sorce,item="find";
for(int i=0;i<sorce.size();i++){
    if(sorce.substr(i,item.size())==item) found;
}

//print with scientific notation
printf("%e\n",x);
printf("%E\n",x);

//scan until '\n';
while(scanf("%d%c",&ch,&tmp)){
    if(tmp=='\n')break;
}

//find the max or minimum value from array or vector
int mx = *max_element(array,array+size);
int mn = *min_element(v.begin(),v.end());

//to swap anything
swap(v1,v2);

//to compare that two floating point number is equals or not
bool cmpfloat(double x,double y){
    if(abs(x-y)<eps)return true;
}

//generate Random number
srand((unsigned)time(0));
while(t--)int r=(rand()%hi_lim)+lo_lim;

//list : concatenate 2 list in O(1)
list<int> li1, li2;
for(int i=1;i<=5;i++){li1.push_back(i);li2.push_back(i*5);}
li1.splice(li1.end(),li2); //O(1)

//unorered set : operation in O(1)
unordered_set<int> st;
st.insert(12); st.insert(11);
(st.count(11)?cout<<"found\n":cout<<"not found\n");

//unordered map : operation in O(1)
unordered_map<string, int> mp;
mp["ab"]=10;


// SET : union, intersection and difference of two set

set<int> a,b,un,in,di;

set_union(all(a),all(b),insert_iterator<set<int> >(un,un.begin()));
set_intersection(all(a),all(b),insert_iterator<set<int> >(in,in.begin()));
set_difference(all(a),all(b),insert_iterator<set<int> >(di,di.begin()));

//Conversions
// - > vector to set
One can initialize a set from a vector:
set<int> b(a.begin(),a.end()); // a is a vector<int>
// - > set to vector
Going the other way is also possible:
vector<int> c(b.begin(),b.end()); // b is a set<int>


//Count a spicific element in any container
count(a.begin(), a.end(), element);


//Convert map to vector
map<int,string> mp;
string s="12ab", a;
for(int i=10;i<=20;i++){
    mp[i] = a; a += s;
}

vector<pair<int,string> > v(mp.begin(),mp.end());

for(auto i : v)cout<<i.first<<" "<<i.second<<"\n";


//Copy data between containers 

--> vector

    vector<int> v1 = {1,2,3,4,5};
    vector<int> v2 = {1,2,3,4,5};
    
    v1.resize(v1.size()+ v2.size());
    copy(all(v2), v1.end()-v2.size());
    
    for(auto i : v1)cout<<i<<" ";cout<<endl;

--> use of pointer to reverse array

    void reverse_array(int *A, int n){
        int *B = A+n-1;
        while(A < B){
            swap(*A, *B); A++,B--;
        }
    }

--> use template to take any type of object aj function perameter
    
template< typename T > void our_function(T *begin, T *end){
    
}

// Counting angorithm

->sum of all element of container
    int sum = accumulate(v.begin(),v.end(),0);

->multiplication of all element of container
    int mul = accumulate(v.begin(),v.end(),1, multiplies<int>());


//reserve memory for vector

v.reserve(100000); 
//---> it will allocate the exact memory need for a vector;
//---> otherwise it will allocate double memory then it needs.

// For_Each

vector<int> v(100);
for_each(all(v), func); 
//for_each send the value of each object in range to a spacific function

//**************************************************************************** 

// lambda function or function inside main function
auto sum = [&](int x, int y) {
    return x+y;
};

cout << sum(5, 15) << endl;

//**************************************************************************** 
// c++ File input output

    ifstream fin;
    fin.open("in.txt");

    vector<string> vs; 
    while(fin) {
        string s;
        getline(fin, s);
        vs.push_back(s);
    }
    fin.close();

    
    ofstream fout;
    fout.open("out.txt");

    for(auto i : vs) {
        cout << i << endl;
        fout << i << endl;
    }
    fout.close();
//**************************************************************************** 






//////////////////////////////////////////////////////////////////////////////////////////////
************************************ SYSTEM ************************************************
//////////////////////////////////////////////////////////////////////////////////////////////

// ___ Run code from ubuntu terminal
C++ 98 : g++ -o test test.cpp
C++ 11 : g++ -std=c++11 -o test test.cpp
C      : gcc -o test test.c
Run code : ./test

// fast compile
g++ -std=c++17 -Wshadow -Wall t1.cpp -o test -O2 -Wno-unused-result
// compile with some debug hint
g++ -std=c++17 -Wshadow -Wall t1.cpp -o test -g -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG
//_______________________________________________


// py

Python2 : python test.py
Python3 : python3 test.py


//jav
java : javac test.java
       java class_name

//find difference between two file by terminal
diff file1.txt file2.txt

//greek alphabet
Α α, Β β, Γ γ, Δ δ, Ε ε, Ζ ζ, Η η, Θ θ, Ι ι, Κ κ, Λ λ, Μ μ, 
Ν ν, Ξ ξ, Ο ο, Π π, Ρ ρ, Σ σ/ς, Τ τ, Υ υ, Φ φ, Χ χ, Ψ ψ, Ω ω
♡ ❤ 

//********************************************************************************************



//////////////////////////////////////////////////////////////////////////////////////////////
******************************************* GREEDY *******************************************
//////////////////////////////////////////////////////////////////////////////////////////////


// *******************************************************************************
// fill a squre with 1 such that 
// ((max(sum_of_row) - min(sum_of_row))^2 - (max(sum_of_col) - min(sum_of_col))^2)
// is minimum...

int p = 0, q = 0;
while(k--) {
    ar[p+1][q+1] = 1;
    p++; q = (q + 1) % n;
    if(p == n) {
        p = 0;
        q = (q + 1) % n;
    }
}

// *******************************************************************************












//********************************************************************************************



//////////////////////////////////////////////////////////////////////////////////////////////
******************************************* GRAPH *******************************************
//////////////////////////////////////////////////////////////////////////////////////////////


//******************** BFS ********************

vector<vector<int>> adj;  // adjacency list representation
int n; // number of nodes
int s; // source vertex

queue<int> q;
vector<bool> used(n);
vector<int> d(n), p(n);

q.push(s);
used[s] = true;
p[s] = -1;
while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int u : adj[v]) {
        if (!used[u]) {
            used[u] = true;
            q.push(u);
            d[u] = d[v] + 1;
            p[u] = v;
        }
    }
}   

void print_path(){
    if (!used[u]) {
       cout << "No path!";
    } 
    else {
        vector<int> path;
        for (int v = u; v != -1; v = p[v])
            path.push_back(v);
        reverse(path.begin(), path.end());
        cout << "Path: ";
        for (int v : path) cout << v << " ";
    }
}

//********************* 0-1 BFS ************************

vector<int> d(n, INF);
d[s] = 0;
deque<int> q;
q.push_front(s);
while (!q.empty()) {
    int v = q.front();
    q.pop_front();
    for (auto edge : adj[v]) {
        int u = edge.first;
        int w = edge.second;
        if (d[v] + w < d[u]) {
            d[u] = d[v] + w;
            if (w == 1)
                q.push_back(u);
            else
                q.push_front(u);
        }
    }
}

//***************** Dijkstra ******************

struct data{
    int node, d;
}
bool vis[MAX+10];
int dist[MAX+10];

int dijkstra(int source){ 
    priority_queue<data>PQ;
    for(int i = 1; i<=n; i++) dist[i] = inf;

    dist[source] = 0;
    PQ.push({source, 0});

    while(PQ.empty() == false) {
        int u = PQ.top().node;
        int d = PQ.top().d    
        PQ.pop();
        //----------------------------------
        if(dist[u] < d) continue;
        //if(vis[u]) continue;
        //vis[u] = true;for(v adjacent to u)
        //----------------------------------
        for(auto v : adj[u]) {
            if(dist[v] > dist[u]+cost[u][v]) {
                
                dist[v] = dist[u] + cost[u][v];
                PQ.push({v, dist[v]});
            }
        }
    }
}

// *************** bidirectional dijkstra *********************

struct data{
    int node, weight;
    data(int a, int b) {
        node = a; weight = b;
    }
};

bool operator < (data a, data b) {
    return a.weight > b.weight;
}

vii fg[1000005];
vii rg[1000005];

bool fprocessed[1000005], rprocessed[1000005];

void dijkstra(int a, int b) {

    vl fcost(1000005, inf);
    vl rcost(1000005, inf);
    
    priority_queue<data> fq, rq;
    MS0(fprocessed); MS0(rprocessed);

    fcost[a] = 0;
    rcost[b] = 0;
    
    fq.push(data(a, 0));
    rq.push(data(b, 0));

    ll ans = inf;

    while(fq.size() || rq.size()) {
        int fu = -1, ru = -1;

        if(fq.size()) {
            fu = fq.top().node; fq.pop();
            if(!fprocessed[fu]) {
                fprocessed[fu] = 1;

                for(auto x : fg[fu]) {
                    int v = x.ff, w = x.ss;

                    if(fcost[fu] + w < fcost[v]) {
                        fcost[v] = fcost[fu] + w;

                        fq.push(data(v, fcost[v]));
                        if(rprocessed[v]) ans = min(ans, fcost[v]+rcost[v]);
                    }
                }
            }
        }
        if(rq.size()) {
            ru = rq.top().node; rq.pop();
            if(!rprocessed[ru]) {
                rprocessed[ru] = 1;

                for(auto x : rg[ru]) {
                    int v = x.ff, w = x.ss;

                    if(rcost[ru] + w < rcost[v]) {
                        rcost[v] = rcost[ru] + w;

                        rq.push(data(v, rcost[v]));
                        if(fprocessed[v]) ans = min(ans, fcost[v]+rcost[v]);
                    }
                }
            }
        }

        bool flg = 0;
        if(fu != -1) {
            if(fprocessed[fu] && rprocessed[fu]) {
                ans = min(ans, fcost[fu] + rcost[fu]);
                flg = 1;
            }
        }
        if(ru != -1) {
            if(fprocessed[ru] && rprocessed[ru]) {
                ans = min(ans, fcost[ru] + rcost[ru]);
                flg = 1;
            }
        }
        if(flg) break;
    }

    if(ans == inf) printf("-1\n");
    else printf("%lld\n", ans);
}

int main() {

    int n = II, m = II;
    for(int i = 0; i < m; i++) {
        int u = II, v = II, w = II;
        fg[u].push_back({v, w});
        rg[v].push_back({u, w});
    }

    int q = II;
    while(q--) {
        int u = II, v = II;
        dijkstra(u, v);
    }

    return 0;
}

// *********************** A* algorithm | co-ordinate of nodes are given ****************************


int n, m;
int x_ax[200005], y_ax[200005];
vii adj[200005];

int dis_from_end[200005], dis_from_start[200005];
bool processed[200005];

void A_star(int a, int b) {
    for(int i = 1; i <= n; i++) {
        dis_from_end[i] = dis2d(x_ax[i], y_ax[i], x_ax[b], y_ax[b]);
        dis_from_start[i] = dis2d(x_ax[i], y_ax[i], x_ax[a], y_ax[a]);
    }

    vector<ll> st_dis(200005, inf);
    priority_queue<data> pq;
    MS0(processed);

    pq.push(data(a, dis_from_end[a]));
    st_dis[a] = 0;

    while(pq.size()) {
        int u = pq.top().node; pq.pop();
        
        if(!processed[u]) {
            processed[u] = 1;

            for(auto x : adj[u]) {
                int v = x.ff, w = x.ss;
                if(st_dis[u] + w < st_dis[v]) {
                    st_dis[v] = st_dis[u] + w;
                    pq.push(data(v, st_dis[v] + dis_from_end[v]));
                }
            }
        }
    }
    if(st_dis[b] == inf) printf("-1\n");
    else printf("%lld\n", st_dis[b]);
}

int main() {

    n = II; m = II;
    for(int i = 1; i <= n; i++) {
        x_ax[i] = II;
        y_ax[i] = II;
    }
    for(int i = 1; i <= m; i++) {
        int a = II, b = II, w = II;
        adj[a].push_back({b, w});
    }

    int q = II;
    while(q--) {
        int source = II, distanation = II;
        A_star(source, distanation);
    }

    return 0;
}


// ***************** K'th Shortest Path ***********************

vii adj[105];

void dijkstra(int k, int s, int e) {
    vi shortest_path[105];
    vi used(105, 0);
    set<pii > Q;

    Q.insert({0,s});

    while(Q.size()) {
        int u = Q.begin()->ss, d = Q.begin()->ff;
        Q.erase(Q.begin());

        if(used[u] == k) continue;
        used[u]++;
        shortest_path[u].push_back(d);

        for(auto x : adj[u]) {

            int v = x.ss, w = x.ff;
            Q.insert({d+w, v});
        }
    }

    for(int i = 0; i < shortest_path[e].size(); i++) {
        cout << i+1 << "'th Shortest path : " << shortest_path[e][i] << "\n";    
    }
}




//********************* Topological sort : Using BFS ************************

int n, m;
int in[n]; MS0(in);
vector<int> adj[n];

for(int i = 0; i < m; i++) {
    int x = II,y = II;
    in[y]++;
    adj[x].push_back(y);
}

queue<int> Q;
for(int i = 0; i < n; i++) {    
    if(in[i] == 0) Q.push(i);
}

int cnt = 0;
while(Q.size()) {

    int x = Q.front();
    Q.pop();

    cnt++;
    for(auto y : adj[x]) {

        in[y]--;
        if(in[y] == 0) Q.push(y);
    }   
}

if(cnt == n) printf("Topological order exist.\n");
else printf("Doesn't exist.\n");



// ******************* Topological sort : Using DFS **********************

vi adj[105];
bool used[105];
vi ans;

void topsort(int u) {
    for(auto v : adj[u]) {
        if(!used[v]) {
            used[v] = 1;
            topsort(v);
        }
    }
    ans.push_back(u);
}

int main() {

    int n, m;
    while(cin >> n >> m) {
        if(n == 0 && m == 0) break;

        for(int i = 0; i <= n; i++) {adj[i] = vi(); used[i] = 0;}
        ans = vi();

        for(int i = 0; i < m; i++) {
            int a, b; cin >> a >> b;
            adj[a].push_back(b);
        }

        for(int i = 1; i <= n; i++) {
            if(!used[i]) {
                used[i] = 1;
                topsort(i);
            }
        }
        reverse(all(ans));
        vpf(ans);
    }
}

// **************** Floyd's cycle finding ****************************

node *find_cycle(node *head) {
    if(head == NULL) return NULL;
    
    node *a = head, *b = head, *c = head;
    
    a = a->next;
    if(a == NULL) return NULL;
    b = b->next->next;
    if(b == NULL) return NULL;
    
    while(a != b) { //cout << a->val << " " << b->val << "\n";
        a = a->next;
        b = b->next;
        if(b == NULL) return NULL;
        b = b->next;
        if(b == NULL) return NULL;
    }
    //cout <<"match : "<< a->val << " " << b->val << endl;
    
    while(a != c) {
        a = a->next;
        c = c->next;
    }
    return c;
}

// ********************* MST : Minimum Spaning Tee ****************************

struct edge{
    int u, v, w;
    edge(int _u, int _v, int _w) {
        u = _u; v = _v; w = _w;
    }
    bool operator<(const edge &other) {
        return w < other.w;
    }
};

vi parent;
int find_parent(int u) {
    if(parent[u] == u) return u;
    return parent[u] = find_parent(parent[u]);
}

edge mst(int number_of_node, int number_of_edge) {
    vector<edge> ed;

    for(int i = 0; i < number_of_edge; i++) {
        int u, v, w; cin >> u >> v >> w;
        ed.push_back(edge(u, v, w));
    }    
    sort(all(ed));

    parent = vi(n+5);
    for(int i = 0; i <= n; i++) parent[i] = i;

    vector<edge> mst;

    for(edge i : ed) {
        if(find_parent(i.u) != find_parent(i.v)) {
            parent[find_parent(i.u)] = find_parent(i.v);
            mst.push_back(i);
        }
    }

    return mst;
}

// ************** Strongly Connected component : kosaraju's algo *************

vi adj[100005];
vi trns[100005];
bool used[100005];
stack<int> tops;

void topsort(int u) {
    used[u] = 1;
    for(auto v : adj[u]) {
        if(!used[v]) {
            topsort(v);
        }
    }
    tops.push(u);
}

vi scc[100005];

void find_scc(int u, int no) {
    used[u] = 1;
    scc[no].push_back(u);

    for(auto v : trns[u]) {
        if(!used[v]) {
            find_scc(v, no);
        }
    }
}

int main() {

    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        trns[v].push_back(u);
    }

    for(int i = 1; i <= n; i++) {
        if(!used[i]) {
            topsort(i);
        }
    }

    MS0(used);
    int scc_no = 0;

    while(tops.size()) {
        int x = tops.top(); tops.pop();
        if(!used[x]) {
            find_scc(x, ++scc_no);
        }
    }

    cout << "Total SCC : "<< scc_no << "\n";
    for(int i = 1; i <= scc_no; i++) {
        cout << i << " : ";
        for(auto j : scc[i]) cout << j << " ";
        cout << "\n";
    }

    return 0;
}


// *********************** Bellman-Ford Algorithm *******************************

int is_there_negative_cycle(int n, viii &edge) {
    vl cost(1005, inf);
    cost[1] = 0;

    for(int i = 1; i < n; i++) {
        for(auto j : edge) {
            cost[j.ss.ff] = min(cost[j.ss.ff], cost[j.ff] + j.ss.ss);
        }
    }
    int ret = 0;
    for(auto j : edge) {
        if(cost[j.ss.ff] > cost[j.ff] + j.ss.ss) {
            ret = 1; break;
        }
    }
    return ret;
}

// shortest path || no_path || neg cycle

int main() {

    int n, m;  cin >> n >> m;
    vector<pair<int,ll> > adj[1005];


    for(int i = 1 ; i <= m; i++) {
        int a, b; ll w; cin >> a >> b >> w;
        adj[a].push_back({b,w});
    }

    int s; cin >> s;

    vl cost(1005, inf); // inf is LONG_MAX
    vi reachable(1005);

    cost[s] = 0;
    reachable[s] = 1;

    queue<int> q;

    for(int i = 1; i <= n; i++) {
        for(int u = 1; u <= n; u++) {
            for(auto j : adj[u]) {
                int v = j.ff; ll w = j.ss;
                if(cost[u] != inf && cost[u] + w < cost[v]) {
                    
                    cost[v] = cost[u] + w;
                    reachable[v] = 1;

                    if(i == n) {
                        q.push(v);
                    }
                }
            }
        }
    }

    vector<int> used(1005);
    vector<int> neg_loop(1005);

    while(q.size()) {
        int u = q.front(); q.pop();
        used[u] = 1;
        neg_loop[u] = 1;
        for(auto j : adj[u]) {
            int v = j.ff;

            if(!used[v]) {
                used[v] = 1;
                neg_loop[v] = 1;
                q.push(v);
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        if(cost[i] == inf) cout << "*\n";
        else if(neg_loop[i]) cout << "-\n";
        else cout << cost[i] << "\n";
    }

    return 0;
}



//****************************************  ************* ************************



//////////////////////////////////////////////////////////////////////////////////////////////
***************************** Biginteger *******************************************
//////////////////////////////////////////////////////////////////////////////////////////////

//******************** MY Implementation ************************

string intsum(string a,string b){
    int l1=a.size()-1, l2=b.size()-1, ca=0;
    string ans;
    while(l1>=0 || l2>=0){
        int x=ca;ca=0;
        if(l1>=0)x+=(a[l1]-48); 
        if(l2>=0)x+=(b[l2]-48); 
        
        if(x>=10){
            ans+=(x%10)+48;
            x/=10; ca=x;
        }
        else ans+=(x+48);

        if(l1>=0)l1--;
        if(l2>=0)l2--;
    }
    if(ca)ans+=(ca+48); 
    reverse(ans.begin(),ans.end());
    while(ans[0]=='0'){ans.erase(ans.begin());if(!ans.size())break;}
    if(!ans.size())ans+='0';
    return ans;
}


int intcmp(string a,string b){//if(a>b)=1; if(a<b)=-1; if(a==b)=0;
    while(a[0]=='0'){a.erase(a.begin());if(!a.size())break;} if(!a.size())a+='0';
    while(b[0]=='0'){b.erase(b.begin());if(!b.size())break;} if(!b.size())b+='0';
    if(a.size()<b.size())return -1;
    else if(a.size()>b.size())return 1;
    else if(a==b)return 0;
    else{
        for(int i=0;i<a.size();i++){
            if(a[i]<b[i])return -1;
            else if(a[i]>b[i])return 1;
        }
        return 1;
    } 
}


string intdif(string a,string b){
    if(intcmp(a,b)==0)return "0";
    if(intcmp(a,b)==1){
        string ans;
        while(b.size()!=a.size())b.insert(b.begin(),'0');
        int l1=a.size()-1,l2=b.size()-1,ca=0,x;
        while(l1>=0 || l2>=0){
            if((a[l1]-48)>=(b[l1]+ca-48)){
                x=(a[l1]-48)-(b[l1]+ca-48);
                ca=0;
            }
            else{
                x=(a[l1]-48+10)-(b[l1]+ca-48);
                ca=1;
            }
            ans+=(x+48);
            l1--;l2--;
        }
        reverse(ans.begin(),ans.end());
        while(ans[0]=='0')ans.erase(ans.begin());
        return ans;
    }
    else return "-";
}


string intpro(string a,string b){
    string ans="0";
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());

    for(int i=0;i<b.size();i++){
        int t=i,c=0;
        string tmp;
        while(t--)tmp+="0";
        for(int j=0;j<a.size();j++){
            int x = ((a[j]-48) * (b[i]-48))+c;;
            if(x>=10){
                tmp+=((x%10)+48);
                x/=10;
                c=x;
            }
            else{
                tmp+=(x+48);
                c=0;
            }
        }
        if(c)tmp+=(c+48);
        reverse(tmp.begin(),tmp.end());
        ans=intsum(ans,tmp);
    }
    return ans;
}

string intdiv(string num, int div) { 
    string ans; 
    int idx = 0; 
    int temp = num[idx] - '0';

    while (temp < div)temp = temp * 10 + (num[++idx] - '0'); 
    
    while (num.size() > idx) { 
        ans += (temp / div) + '0'; 
        temp = (temp % div) * 10 + num[++idx] - '0'; 
    } 
      
    if (ans.length() == 0) 
        return "0"; 
      
    return ans; 
}

//********************** BIG Power ***************

int multiply(int x, int res[], int res_size) { 
    int carry = 0; 
      
    for (int i = 0; i < res_size; i++) { 
        int prod = res[i] * x + carry; 
      
        res[i] = prod % 10; 
      
        carry = prod / 10; 
    } 
      
    while (carry) { 
        res[res_size] = carry % 10; 
        carry = carry / 10; 
        res_size++; 
    } 
    return res_size; 
} 
      
string power(int x, int n){ 
    if(n == 0 ){  
        cout<<"1"; 
        return; 
    } 
    int res[1000000]; 
    int res_size = 0; 
    int temp = x; 
      
    while (temp != 0) { 
        res[res_size++] = temp % 10; 
        temp = temp / 10; 
    } 
      
    for (int i = 2; i <= n; i++) 
        res_size = multiply(x, res, res_size); 
      
    string s;
    for (int i = res_size - 1; i >= 0; i--){
        s.push_back(res[i]+48);
    } 
    return s;
} 

//**************** Bigint by Jane alam Jan ********************
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

struct Bigint {
    string a;
    int sign;

    Bigint() {}
    Bigint( string b ) { (*this) = b; }
    int size() { return a.size(); }
    Bigint inverseSign() { sign *= -1; return (*this); }
    Bigint normalize( int newSign ) {
        sign = newSign;
        for( int i = a.size() - 1; i > 0 && a[i] == '0'; i-- ) a.erase(a.begin() + i);
        if( a.size() == 1 && a[0] == '0' ) sign = 1;
        return (*this);
    }
    void operator = ( string b ) {
        a = b[0] == '-' ? b.substr(1) : b;
        reverse( a.begin(), a.end() );
        this->normalize( b[0] == '-' ? -1 : 1 );
    }
    bool operator < ( const Bigint &b ) const {
        if( a.size() != b.a.size() ) return a.size() < b.a.size();
        for( int i = a.size() - 1; i >= 0; i-- ) if( a[i] != b.a[i] ) return a[i] < b.a[i];
        return false;
    }
    Bigint operator + ( Bigint b ) {
        if( sign != b.sign ) return (*this) - b.inverseSign();
        Bigint c;
        for( int i = 0, carry = 0; i < (int)a.size() || i < (int)b.size() || carry; i++ ) {
            carry += (i < (int)a.size() ? a[i] - 48 : 0) + (i < (int)b.a.size() ? b.a[i] - 48 : 0);
            c.a += (carry % 10 + 48);
            carry /= 10;
        }
        return c.normalize(sign);
    }
    Bigint operator - ( Bigint b ) {
        if( sign != b.sign ) return (*this) + b.inverseSign();
        if( (*this) < b ) return (b - (*this)).inverseSign();
        Bigint c;
        for( int i = 0, borrow = 0; i < (int)a.size(); i++ ) {
            borrow = a[i] - borrow - (i < b.size() ? b.a[i] : 48);
            c.a += borrow >= 0 ? borrow + 48 : borrow + 58;
            borrow = borrow >= 0 ? 0 : 1;
        }
        return c.normalize(sign);
    }
    Bigint operator * ( Bigint b ) {
        Bigint c("0");
        for( int i = 0, k = a[i]; i < (int)a.size(); i++, k = a[i] ) {
            while(k-- - 48) c = c + b;
            b.a.insert(b.a.begin(), '0');
        }
        return c.normalize(sign * b.sign);
    }
    Bigint operator / ( Bigint b ) {
        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 ) ;
        Bigint c("0"), d;
        for( int j = 0; j < (int)a.size(); j++ ) d.a += "0";
        int dSign = sign * b.sign; b.sign = 1;
        for( int i = a.size() - 1; i >= 0; i-- ) {
            c.a.insert( c.a.begin(), '0');
            c = c + a.substr( i, 1 );
            while( !( c < b ) ) c = c - b, d.a[i]++;
        }
        return d.normalize(dSign);
    }
    Bigint operator % ( Bigint b ) {
        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 ) ;
        Bigint c("0");
        int cSign = sign * b.sign; b.sign = 1;
        for( int i = a.size() - 1; i >= 0; i-- ) {
            c.a.insert( c.a.begin(), '0');
            c = c + a.substr( i, 1 );
            while( !( c < b ) ) c = c - b;
        }
        return c.normalize(cSign);
    }
    void print() {
        if( sign == -1 ) putchar('-');
        for( int i = a.size() - 1; i >= 0; i-- ) putchar(a[i]);
    }
};

int main() {
    Bigint a, b, c;
    a = "511";
    b = "10";

    c = a + b;
    c.print();
    putchar('\n');

    c = a - b;
    c.print();
    putchar('\n');

    c = a * b;
    c.print();
    putchar('\n');

    c = a / b;
    c.print();
    putchar('\n');

    c = a % b;
    c.print();
    putchar('\n');

    return 0;
}
//**************************************************************************



//////////////////////////////////////////////////////////////////////////////////////////////
********************************** Dynamic Programming *********************************
//////////////////////////////////////////////////////////////////////////////////////////////


//********** Combination ***********
ll ar[10000][10000];

ll ncr(int n,int r){
    if(r==1)return n;if(n==r)return 1;
    ll a,b;

    if(ar[n-1][r])a=ar[n-1][r];
    else{
        a=ncr(n-1,r);
        ar[n-1][r]=a;
    }

    if(ar[n-1][r-1])b=ar[n-1][r-1];
    else{
        b=ncr(n-1,r-1);
        ar[n-1][r-1]=b;
    }

    return ar[n][r]=a+b;
}


//****************** MCM DP ********************
//problem : LightOJ 1422 - Halloween Costumes

int n, dress[105];
int dp[105][105];

int solve(int l, int r){
    if(l > r)return 0;

    int &ret = dp[l][r];
    if(ret != -1)return ret;

    int x = solve(l+1, r) + 1, y = 1e6;
    for(int i=l+1;i<=r;i++){
        if(dress[i] == dress[l]){
            int z = solve(l+1, i-1) + solve(i, r);
            y = min(y, z);
        }
    }
    return ret = min(x, y);
}
int main(){
    int t, tst=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&dress[i]);
            memset(dp, -1, sizeof dp);
        printf("Case %d: %d\n", tst++, solve(0,n-1));
    }
    return 0;
}


//******* Print - lexicographically smallest : LCS *******
//problem : LightOJ 1110 - An Easy LCS

string a, b;

int dp[105][105];

int solve(int i, int j){
    if(i >= a.size() || j >= b.size())return 0;

    int &ret = dp[i][j];
    if(ret != -1)return ret;

    int x=0, y=0, z=0;
    if(a[i] == b[j]){
        x = solve(i+1, j+1) + 1;
    }
    else{
        y = solve(i+1, j);
        z = solve(i, j+1);
    }

    return ret = max(x, max(y, z));
}

void print(int i, int j){
    for(char x = 'a'; x <= 'z'; x++){
        int k=i,l=j;
        while(a[k] != x){k++;if(k>=a.size())break;}
        while(b[l] != x){l++;if(l>=b.size())break;}
        if(k < a.size() && l < b.size()){
            if(dp[i][j] == dp[k][l]){
                cout<<x;
                print(k+1, l+1);
                break;
            }
        }
    }
}

int main(){
    int t, tst=1;
    scanf("%d",&t);
    while(t--){
        cin>>a>>b;
        memset(dp, -1, sizeof dp);

        if(solve(0,0)){
            cout<<"Case "<< tst++ <<": ";
            print(0,0);
            cout<<"\n";
        }
        else{ 
            cout<<"Case "<< tst++ <<": ";
            cout<<":(\n";
        }
    }
    return 0;
}

//********* Print - total number of unique : LCS ***********
//Problem - LightOJ 1157 - LCS Revisited

#define mod 1000007

string a, b;
int len;

int dp[1005][1005];

int solve(int i, int j){
    if(i >= a.size() || j >= b.size())return 0;

    int &ret = dp[i][j];
    if(ret != -1) return ret;

    int x=0, y=0;
    if(a[i] == b[j]){
        x = solve(i+1, j+1) + 1;
    }
    else{
        y = max(solve(i+1, j), solve(i, j+1));
    }
    return ret = max(x, y);
}

int wdp[1005][1005];

int way(int i, int j, int sz){
    if(sz == len)return 1;
    
    int &ret = wdp[i][j];
    if(ret != -1)return ret;
    ret = 0;

    for(int x='a';x<='z';x++){
        int k=i, l=j;
        while(k<a.size()){
            if(a[k] == x)break;
            k++;
        }
        while(l<b.size()){
            if(b[l] == x)break;
            l++;
        }
        if(a[k]==x && b[l]==x && dp[i][j] == dp[k][l]){
            ret = (ret + way(k+1, l+1, sz+1)) % mod;
        }
    }

    return ret;
}


int main() {
    int t, tst = 1;
    cin >> t;
    while(t--){
        cin >> a >> b;
        
        memset(dp, -1, sizeof dp);
        memset(wdp, -1, sizeof wdp);
        len = solve(0,0);

        cout << "Case " << tst++ << ": " << way(0,0,0) << "\n";
    }
    return 0;
}

//********** length & unique total count of smallest substring 
//which contain given two string as subsequence *****************
//Problem - LightOJ 1013 - Love Calculator

string a, b;
int lc_dp[35][35], len;

int lcs(int i, int j){
    if(i == a.size() || j == b.size()) return 0;

    if(lc_dp[i][j] != -1)return lc_dp[i][j];

    if(a[i] == b[j]){
        return lc_dp[i][j] = lcs(i+1, j+1) + 1;         
    }
    else{
        return lc_dp[i][j] = max(lcs(i+1, j), lcs(i, j+1));
    }
}

ll dp[40][40][100];

ll solve(int i, int j, int ln){
    if(i == a.size() && j==b.size() && ln == len)return 1;
    if((i == a.size() && j == b.size()) || ln > len)return 0;

    ll &ret = dp[i][j][ln];
    if(ret != -1)return ret;

    ll x = 0, y = 0, z = 0;
    if(i < a.size() && j < b.size()){
        if(a[i] == b[j]){
            x = solve(i+1, j+1, ln+1);
        }
        else{
            y = solve(i+1, j, ln+1);   
            z = solve(i, j+1, ln+1);;
        }
        return ret = x + y + z;
    }
    else{
        if(i<a.size()) y = solve(i+1, j, ln+1);
        if(j<b.size()) z = solve(i, j+1, ln+1);
        return ret = x + y + z;
    }
}


int main(){
    int t, tst=1;
    cin>>t;
    while(t--){
        cin >> a >> b;
        memset(lc_dp, -1, sizeof lc_dp);
        memset(dp, -1, sizeof dp);

        len = (a.size()+b.size()) - lcs(0, 0);
        ll total = solve(0,0,0);

        printf("Case %d: %d %lld\n", tst++, len, total);
    }
    return 0;
}

//************************ Digit DP **************************
// Total count of zero between two integer L and R
vector<int> v;
ll dp[20][3][20];
ll calculate(int pos, int small, int zero){
    if(pos >= v.size())return zero;

    ll &ret = dp[pos][small][zero];
    if(ret != -1)return ret;
    ret = 0;

    if(small){
        ret += calculate(pos+1, small, zero+1);
        for(int i=1;i<=9;i++) ret += calculate(pos+1, small, zero);
    }
    else{
        for(int i=0;i<v[pos];i++){
            if(i==0) ret += calculate(pos+1, 1, zero+1);
            else ret += calculate(pos+1, 1, zero);
        }
        if(v[pos]==0) ret += calculate(pos+1, 0, zero+1);
        else ret += calculate(pos+1, 0, zero);
    }
    return ret;
}

ll solve(){
    if(v.size() == 0)return 0;

    ll ret=0;
    for(int i=1;i<v[0];i++){
        ret += calculate(1, 1, 0);
    }
    ret += calculate(1, 0, 0);
    for(int i=1;i<v.size();i++){
        for(int j=1;j<=9;j++){
            ret += calculate(i+1, 1, 0);
        }
    }
    return ret;
}


int main(){
    int t, tst=1;
    scanf("%d",&t);
    while(t--){
        ll x, y, z=0;
        scanf("%lld %lld", &x, &y);

        if(x==0)z=1;
        v = vector<int>();
        while(x){
            v.push_back(x%10);
            if(x%10 == 0) z++;
            x /= 10;
        }
        reverse(v.begin(),v.end()); 
        memset(dp, -1, sizeof dp);
        ll lo = solve();

        v = vector<int>();
        while(y){
            v.push_back(y%10);
            y/=10;
        }
        reverse(v.begin(),v.end()); 
        memset(dp, -1, sizeof dp); 
        ll hi = solve();

        printf("Case %d: %lld\n", tst++, hi - lo + z);
    }
    return 0;
}


//***************************************************************************************
//******** Print A number within a range whose multiplication of digits are maximum ********

#define pls pair<ll, string>
 
string a, b;
 
pls dp[20][12][3][3][3];
bool vis[20][12][3][3][3];
 
 
pls solve(int pos, int dig, int boro, int choto, int start){
    if(pos == a.size()){
        return {1, ""};
    }
 
    if( vis[pos][dig][boro][choto][start] ) return dp[pos][dig][boro][choto][start];
    vis[pos][dig][boro][choto][start] = 1;
 
    ll ret = -1; string re;
 
    if(start){
        if(a[pos]=='0'){ 
            pls x = solve(pos+1, 0, 1, 1, 0);
            if(x.ff > ret){
                ret = x.ff;
                re = "";
                re += x.ss;
            }
 
            for(int i = 1; i < (b[pos]-48); i++){
                x = solve(pos+1, i, 1, 1, 0);
                if(x.ff*i > ret){
                    ret = x.ff*i;
                    re = "";
                    re.push_back((char)(i+48));
                    re += x.ss;
                }
            } 
            x = solve(pos+1, (b[pos]-48), 1, 0, 0);
            if(x.ff*(b[pos]-48) > ret){
                ret = x.ff*(b[pos]-48);
                re = "";
                re.push_back(b[pos]);
                re += x.ss;
            }
        }
        else{
            pls x = solve(pos, 0, boro, choto, 0);
            if(x.ff > ret){
                ret = x.ff;
                re = "";
                re += x.ss;
            }
        }
    }
    else if(boro && choto){
        for(int i=0;i<10;i++){
            pls x = solve(pos+1, i, boro, choto, start);
            if(x.ff*i > ret){
                ret = x.ff*i;
                re = "";
                re.push_back((char)(i+48));
                re += x.ss;
            }
        }
    }
    else{
        if(boro){
            for(int i=0;i<(b[pos]-48);i++){
                pls x = solve(pos+1, i, boro, 1, start);
                if(x.ff*i > ret){
                    ret = x.ff*i;
                    re = "";
                    re.push_back((char)(i+48));
                    re += x.ss;
                }
            } 
            pls x = solve(pos+1, (b[pos]-48), boro, choto, start);
            if(x.ff*(b[pos]-48) > ret){
                ret = x.ff*(b[pos]-48);
                re = "";
                re.push_back(b[pos]);
                re += x.ss;
            }
        }
        else if(choto){
            pls x = solve(pos+1, (a[pos]-48), boro, choto, start);
            if(x.ff*(a[pos]-48) > ret){
                ret = x.ff*(a[pos]-48);
                re = "";
                re.push_back(a[pos]);
                re += x.ss;
            }
 
            for(int i = (a[pos] - 48) + 1; i < 10; i++){
                pls x = solve(pos+1, i, 1, choto, start);
                if(x.ff*i > ret){
                    ret = x.ff*i;
                    re = "";
                    re.push_back((char)(i+48));
                    re += x.ss;
                }
            }
        }
        else{
            pls x = solve(pos+1, (a[pos]-48), boro, ((a[pos]-48) != (b[pos]-48) ? 1 : 0), start);
            if(x.ff*(a[pos]-48) > ret){
                ret = x.ff*(a[pos]-48);
                re = "";
                re.push_back(a[pos]);
                re += x.ss;
            }
 
            for(int i = (a[pos] - 48) + 1; i < (b[pos]-48); i++){
                pls x = solve(pos+1, i, 1, 1, start);
                if(x.ff*i > ret){
                    ret = x.ff*i;
                    re = "";
                    re.push_back((char)(i+48));
                    re += x.ss;
                }
            }
            if((a[pos]-48) != (b[pos]-48)){ 
                pls x = solve(pos+1, (b[pos]-48), 1, choto, start);
                if(x.ff*(b[pos]-48) > ret){
                    ret = x.ff*(b[pos]-48);
                    re = "";
                    re.push_back(b[pos]);
                    re += x.ss;
                }
            }
        }
    }
 
    return dp[pos][dig][boro][choto][start] = {ret, re};
}
 
 
int main(){
    cin >> a >> b;
 
    while(a.size() < b.size()) a = "0"+a;
    MS0(vis);
 
    pls x = solve(0, 0, 0, 0, 1);
    cout << x.ss << "\n";
 
    return 0;
}

// ************* O(n^2) LIS and path printgin *********

int n = II;
vi dp(n,1), path(n,-1), v(n);

for(int i = 0; i < n; i++) {
    v[i] = II;

    for(int j = 0; j < i; j++) {

        if(v[i] >= v[j]) {
            if(dp[j]+1 > dp[i]) {

                dp[i] = dp[j] + 1;
                path[i] = j;
            }
        }
    }
}

int ans = max_ele(dp);
cout << "\nLength of LIS is : " << ans  << "\n";

vi path_sol;
cout << "\nLIS is :\n";

for(int i = 0; i < dp.size(); i++) {
    if(dp[i] == ans) {
        while(1) { path_sol.push_back(v[i]); i = path[i]; if(i == -1) break; }
        break;
    }
}
reverse(all(path_sol));
vpf(path_sol, ans);


// ************** LIS by binary search *****************


// ******** nlogn LIS size and genarete LIS : opmizing a dp *************


// defination of orginal dp solution was....
// dp[i] = the last element of the LIS with length i

// implementation is like this
vi ar(n);
vi dp(n+1, inf);
dp[0] = -inf;

for(int i = 0; i < n; i++) {
    for(int j = 1; j <= n; j++) { // this loop is updating only once
    // and dp array in allways sorted so we can select index by binary search
        if(dp[j-1] < ar[i] && ar[i] < dp[i]) dp[i] = ar[i];
    }
}

** LIS is the lst i where dp[i] < inf

// dp[i] = index of the last element of the LIS with size i
// path[i] = index of the value ar[dp[i-1]] which was places before i.

int n; cin >> n;
vi dp(n+1, intmx);
dp[0] = -intmx;

vi ar(n);

for(int i = 0; i < n; i++) {
    cin >> ar[i];

    int idx, lo = 0, hi = n-1;
    while(lo <= hi) {

        int mid = (lo + hi) / 2;
        if(dp[mid] < ar[i]) {
        
            idx = mid;
            lo = mid + 1;
        }
        else hi = mid - 1;
    }

    dp[idx+1] = ar[i];
} 


int ans = 0;
for(int i = 1; i <= n; i++) { 
    if(dp[i] != intmx) ans = i;
}
cout << ans << endl;




// ******** Implementaion of the idea above : using set *******

int lis_binary_search(vector<int> v){
    set<int> st;
    for(int i=0;i<v.size();i++){
        auto x = st.lower_bound(v[i]);
        if(x == st.end()) st.insert(v[i]);
        else {
            st.erase(*x);
            st.insert(v[i]);
        }
    }
    return (int)st.size();
}

//****************** LIS by segment tree ********************
//uva 481 : what goes up

bool cmp(pair<int,int> x, pair<int,int> y) {
    if(x.first == y.first) return x.second > y.second;
    return x.first < y.first;
}
 
vector<int> v;
int node[400005];
int dp[100005], dir[100005];
 
pair<int,int> queary(int now, int lo, int hi, int l, int r, bool flg){
    if(lo == hi) return {node[now], lo};
 
    if(flg){
        int mid = (lo + hi) / 2;
        if(node[(now*2)+1] >= node[now*2]) return queary((now*2)+1, mid+1, hi, l ,r, flg);
        else return queary(now*2, lo, mid, l, r, flg);
    }
 
 
    if(r == -1) return {0,0};
    if(lo == l && hi == r) return queary(now, lo, hi, l, r, 1);
 
 
    int mid = (lo + hi) / 2;
    if(r <= mid) return queary(now*2, lo, mid, l, r, flg);
    else if(l > mid) return queary((now*2)+1, mid+1, hi, l, r, flg);
    else {
        return max( queary(now*2, lo, mid, l, mid, flg), queary((now*2)+1, mid+1, hi, mid+1, r, flg) );
    }
}
 
void update(int now, int lo, int hi, int idx, int val) {
    if(lo == hi){
        node[now] = val;
        dp[lo] = val;
        return;
    }
    int mid = (lo+hi) / 2;
    if(idx <= mid) update(now*2, lo, mid, idx, val);
    else if(idx > mid) update((now*2)+1, mid+1, hi, idx, val);
 
    node[now] = max(node[now*2], node[(now*2)+1]);
}
 
int main(){
    
    vector<pair<int,int> > pr;
    int x, y=0; 
    while(scanf("%d",&x) != EOF) { 
        v.push_back(x);
        pr.push_back({x, y});
        y++;
    }
 
    memset(dir, -1, sizeof dir); 
    sort(pr.begin(),pr.end(),cmp);
 
    int mx=0;
 
    for(int i=0;i<v.size();i++){
        pair<int,int> p = queary(1, 0, v.size()-1, 0, pr[i].second-1, 0);        
        update(1, 0, v.size()-1, pr[i].second, p.first+1);
 
        if(p.first) dir[pr[i].second] = p.second;
 
        mx = max(mx, p.first+1);
    }
 
    for(int i=v.size()-1;i>=0;i--){
        if(dp[i] == mx){
            x = i;
            vector<int> ans;
            while(dir[x] != -1){
                ans.push_back(v[x]);
                x = dir[x]; 
            }
            ans.push_back(v[x]);
            reverse(ans.begin(), ans.end());
 
            cout<<mx<<"\n-\n";
            for(int j=0;j<ans.size();j++) cout<<ans[j]<<"\n";
 
            break;
        }
    }
 
    return 0;
}

// -------------- total count of LIS -------------------------

vector<int> adj[2005];
vector<int> tree_dp;

int calculate(int u) {
    
    if(adj[u].size() == 0) return 1;
    
    if(tree_dp[u] != -1) return tree_dp[u];
    
    int ret = 0, flg = 1;
    for(auto v : adj[u]) {
        flg = 0;
        ret += calculate(v);
    }
    if(flg) return 1;
    
    return tree_dp[u] = ret;
}

int findNumberOfLIS(vector<int>& nums) {
    if(nums.size() == 0) return 0;
    if(nums.size() == 1) return 1;
    
    vector<int> dp(2005, 1);
    
    int lis = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < i; j++) {
            if(nums[i] > nums[j]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        lis = max(lis, dp[i]);
    }
    
        
    //cout << "lis = " << lis << endl;
    
    vector<int> n_dp(2005, 1);
    
    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < i; j++) {
            if(nums[i] > nums[j]) {
                 
                n_dp[i] = max(n_dp[i], n_dp[j]+1);
                
                if(n_dp[j] + 1 == dp[i]) {
                    adj[i].push_back(j);
                }
            }
        }
    }
    int ans = 0;
    tree_dp = vector<int>(2005, -1);
    
    for(int i = 0; i < nums.size(); i++) {
        if(dp[i] == lis) {
            ans += calculate(i);
        }
    }
    return ans;
}




//************************** Tiling DP **************************************
// light oj tile 2

 
int r, c;
vi v;
 
ull dp[105][260];
 
ull solve(int, int);
 
ull fill(int row, int col, int cmask, int nmask) {
    if(col == c) return solve(row+1, nmask);
 
    if(!check_bit(cmask, col)){
 
        ull ret = 0;
        for(int i=1;i<=6;i++) {
 
            if(i == 1){
                if(row+1 < r){
                    if(!check_bit(cmask, col) && !check_bit(nmask, col)){
                        ret += fill(row, col+1, on_bit(cmask, col), on_bit(nmask, col));
                    }
                }
            }
            else if(i == 2){
                if(col+1 < c){
                    if(!check_bit(cmask, col) && !check_bit(cmask, col+1)){
                        ret += fill(row, col+2, on_bit(on_bit(cmask, col), col+1), nmask);
                    }
                }   
            }
            else if(i == 3){
                if(col-1 >= 0 && row+1<r){
                    if(!check_bit(cmask, col) && !check_bit(nmask, col) && !check_bit(nmask, col-1)) {
                        ret += fill(row, col+1, on_bit(cmask, col), on_bit(on_bit(nmask, col),col-1));
                    }
                }
            }
            else if(i == 4){
                if(col+1 < c && row+1 < r){
                    if(!check_bit(cmask, col) && !check_bit(cmask, col+1) && !check_bit(nmask, col+1)){
                        ret += fill(row, col+2, on_bit(on_bit(cmask, col), col+1), on_bit(nmask,col+1));
                    }
                }   
            }
            else if(i == 5){
                if(col+1 < c && row+1<r){
                    if(!check_bit(cmask, col) && !check_bit(nmask, col) && !check_bit(nmask, col+1)) {
                        ret += fill(row, col+1, on_bit(cmask, col), on_bit(on_bit(nmask, col),col+1));
                    }
                }
            }
            else {
                if(col+1 < c && row+1 < r){
                    if(!check_bit(cmask, col) && !check_bit(cmask, col+1) && !check_bit(nmask, col)){
                        ret += fill(row, col+2, on_bit(on_bit(cmask, col), col+1), on_bit(nmask,col));
                    }
                }
            }
        }
        return ret;
    }
    else return fill(row, col+1, cmask, nmask);
}
 
ull solve(int row, int mask) {
    if(row >= r) return 1;
 
    ull &ret = dp[row][mask];
    if(ret != -1) return ret;
    ret = 0;
 
    return ret = fill(row, 0, mask, ((row+1)<r ? v[row+1] : 0));
}
 
int main(){
    //fastio;
 
    TEST_CASE{
        int n , m;
        cin >> n >> m;
 
        int ar[n][m];
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            for(int j=0;j<m;j++){
                if(s[j] == '#') ar[i][j] = 1;
                else ar[i][j] = 0;
            }   
        }
 
        v = vi();
        if(m>n){
            for(int i=0;i<m;i++){
                int in=0;
                for(int j=0,k=n-1;j<n;j++,k--){ 
                    if(ar[j][i]) in += (1<<k);
                }
                v.push_back(in);
            }
            r=m; c=n;
        }
        else{
            for(int i=0;i<n;i++){
                int in=0;
                for(int j=0,k=m-1;j<m;j++,k--){ 
                    if(ar[i][j]) in += (1<<k);
                }
                v.push_back(in);
            }
            r=n; c=m;
        }
 
        MS1(dp);
        cout << "Case " << cs << ": " << solve(0, v[0]) << "\n";
    }
 
    return 0;
}

//********* Partion a set into a number of subset of same sum *************

bool set_pertition(vi &v, int terget, int segment, int remain, int start, int mask) {
    if(segment == 0) return 1;

    bool fst = (terget == remain);
    int bit = (1 << start);

    for(int i = start; i < v.size(); i++) {
        if((mask & bit) == 0) {
            if(v[i] == remain) {
                if(set_pertition(v, terget, segment-1, terget, 0, mask | bit)) return 1;
            }
            else if(v[i] <= remain){
                if(set_pertition(v, terget, segment, remain-v[i], i+1, mask | bit)) return 1;
            }
            if(fst) break;
        }
        bit = bit << 1;
    }

    return 0;
}

//********* knapsack | O(n) memory | based on weight | based on value ***********

// based on weight
int n, w; cin >> n >> w;
vl dp(w+1);

while(n--) {
    int weight, val; cin >> weight >> val;
    for(int i = w; i >= 0; i--) {
        if(i - weight >= 0) {
            dp[i] = max(dp[i], dp[i-weight] + val);
        }
    }
}

cout << max_ele(dp) << "\n";

// based on value
int n, w; cin >> n >> w;
    vl dp(100005, inf);
    dp[0] = 0;

    while(n--) {
        int weight, val; cin >> weight >> val;
        for(int i = 100000; i >= 0; i--) {
            if(i - val >= 0) {
                dp[i] = min(dp[i], dp[i-val] + weight);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= 100000; i++) {
        if(dp[i] <= w) ans = i;
    }
    cout << ans << "\n";

//********************************************************************************




//////////////////////////////////////////////////////////////////////////////////////////////
*************************** divide And conquer ************************************
//////////////////////////////////////////////////////////////////////////////////////////////


// _______ Karatsuba fast polynomial multiplication _____________

void print_polynomial(vi v) {
 
    for(int i = 0, j = v.size()-1 ; i < v.size(); i++, j--) {
 
        if(v[i]) {
            if(v[i] > 1) cout << v[i];
            else if(v[i] == 1 && j == 0) cout << "1";
            if(j) {
                if(j == 1) cout << "x";
                else cout << "x^" << j;
            }
            if(i < v.size()-1) cout << " + ";
        }
        else{
            cout << "0";
            if(i < v.size()-1) cout << " + ";
        }
    }
    cout << "\n";
}
 
 
vi multiply_polynomial_nieve(vi x, vi y) {
    vi ret((x.size()*2)-1);
 
    for(int i = 0; i < x.size(); i++) {
        for(int j = 0; j < y.size(); j++) {
 
            ret[i+j] += (x[i] * y[j]);
        }
    }
    return ret;
}
 
vi multiply_polynomial_nieve_d_and_q(vi x, vi y) {
    int n = x.size();
    if(n == 1) {
        vi ret(1);
        ret[0] = x[0] * y[0];
        return ret;
    }
 
    vi x1, x0, y1, y0;
    for(int i = 0; i < n/2; i++) x1.push_back(x[i]);
    for(int i = (n/2); i < n; i++) x0.push_back(x[i]);
    for(int i = 0; i < n/2; i++) y1.push_back(y[i]);
    for(int i = (n/2); i < n; i++) y0.push_back(y[i]);
 
    if(x1.size() < y0.size()) x1.push_back(0);
    if(y1.size() < x0.size()) y1.push_back(0);
 
    vi x1y1 = multiply_polynomial_nieve_d_and_q(x1, y1);
    vi x0y0 = multiply_polynomial_nieve_d_and_q(x0, y0);
 
    vi x1y0 = multiply_polynomial_nieve_d_and_q(x1, y0);
    vi x0y1 = multiply_polynomial_nieve_d_and_q(x0, y1);
 
 
    vi ret(n*2-1);
 
    for(int i = 0, j = 0; i <= n-2; i++, j++) ret[i] += x1y1[j];
    for(int i = n/2, j = 0; i <= n+(n/2)-2; i++, j++) ret[i] += (x1y0[j] + x0y1[j]);
    for(int i = (n*2-1)-x0y0.size(), j = 0; i <= n*2-2; i++, j++) ret[i] += x0y0[j];
 
    return ret;
}
 
vi multiply_polynomial_fast_d_and_q(vi x, vi y) {
    int n = x.size();
    if(n == 1) {
        vi ret(1);
        ret[0] = x[0] * y[0];
        return ret;
    }
 
    vi x1, x0, y1, y0;
    for(int i = 0; i < n/2; i++) x1.push_back(x[i]);
    for(int i = (n/2); i < n; i++) x0.push_back(x[i]);
    for(int i = 0; i < n/2; i++) y1.push_back(y[i]);
    for(int i = (n/2); i < n; i++) y0.push_back(y[i]);
 
    if(x1.size() < y0.size()) x1.push_back(0);
    if(y1.size() < x0.size()) y1.push_back(0);
 
    vi x1y1 = multiply_polynomial_fast_d_and_q(x1, y1);
    vi x0y0 = multiply_polynomial_fast_d_and_q(x0, y0);
 
    vi x1Px0(x1.size());
    for(int i = 0; i < x1.size(); i++) {
        x1Px0[i] = (x1[i] + x0[i]);
    }
    vi y1Py0(y1.size());
    for(int i = 0; i < y1.size(); i++) {
        y1Py0[i] = (y1[i] + y0[i]);
    }
 
    vi mid_item = multiply_polynomial_fast_d_and_q(x1Px0, y1Py0);
    for(int i = 0; i < x1y1.size(); i++) mid_item[i] -= (x1y1[i] + x0y0[i]);
 
    vi ret(n*2-1);
 
    for(int i = 0, j = 0; i <= n-2; i++, j++) ret[i] += x1y1[j];
    for(int i = n/2, j = 0; i <= n+(n/2)-2; i++, j++) ret[i] += mid_item[j];
    for(int i = (n*2-1)-x0y0.size(), j = 0; i <= n*2-2; i++, j++) ret[i] += x0y0[j];
 
    return ret;
}
 
int main() {
 
    cout << "\ninput coefficients of 2 polynomial of same degree and size:" << endl;
    int a, b;
    cin >> a;
    vi x(a); vsc(x);
    cin >> b;
    vi y(b); vsc(y);
 
 
 
    cout << endl;
    cout << "our polynomials are :" << endl;
    print_polynomial(x);
    print_polynomial(y);
    cout << endl;
 
    cout << "nieve loop :" << endl;
    vi pro = multiply_polynomial_nieve(x, y);
    print_polynomial(pro);
    cout << endl;
 
    cout << "nieve divide and conqure :" << endl;
    pro = multiply_polynomial_nieve_d_and_q(x, y);
    print_polynomial(pro);
    cout << endl;
 
    cout << "fast divide and conqure :" << endl;
    pro = multiply_polynomial_fast_d_and_q(x, y);
    print_polynomial(pro);
    cout << endl;
 
    return 0;
}



//_________________ Closest point pair  ________________________
// given a list of point find the two most closest point point

struct pt{
    double x = 0.0, y = 0.0;
    int id=0;
};


int n;
pt ls[100005], tmp[100005];

double min_dist;
pair<int, int> best_pair;


void update_ans(const pt &a, const pt &b) {     
    double dist = sqrt(((a.x - b.x)*(a.x - b.x)) + ((a.y - b.y)*(a.y - b.y)));
   
    if(dist < min_dist) {     
        min_dist = dist;
        best_pair = {a.id, b.id};
    }
}


void sort_x(int lo, int hi) {

    if(lo == hi) return;
    int mid = (lo + hi) / 2;
    
    sort_x(lo, mid);
    sort_x(mid + 1, hi);
    
    for(int i = lo, j = mid + 1, k = lo; k <= hi; k++) {
        if(i == mid + 1) tmp[k] = ls[j++];
        else if(j == hi + 1) tmp[k] = ls[i++];
        else if(ls[i].x <= ls[j].x) tmp[k] = ls[i++];
        else tmp[k] = ls[j++];
    }
    for(int i = lo; i <= hi; i++) ls[i] = tmp[i];
}


void solve(int lo, int hi) {
    if(lo == hi) return;

    int mid = (lo + hi) / 2;
    int midx = ls[mid].x;

    solve(lo, mid);
    solve(mid+1, hi);

    //--- margeing : left and right part sorted based on y-axis ---
    for(int i = lo, j = mid + 1, k = lo; k <= hi; k++) {
        if(i == mid + 1) tmp[k] = ls[j++];
        else if(j == hi + 1) tmp[k] = ls[i++];
        else if(ls[i].y <= ls[j].y) tmp[k] = ls[i++];
        else tmp[k] = ls[j++];
    }
    for(int i = lo; i <= hi; i++) ls[i] = tmp[i];
    //-------------------------------------------------------------


    // --- taking the points have distence with midx --------------
    // --- smaller then min_dist ----------------------------------
    int xx = 0;
    for(int i = lo; i <= hi; i++) {
        if(abs(ls[i].x - midx) < min_dist) tmp[xx++] = ls[i];
    }
    for(int i = 0; i < xx; i++) {
        for(int j = i+1; (j < xx) && (tmp[j].y - tmp[i].y < min_dist); j++) {
            update_ans(tmp[i], tmp[j]);
        }
    }
    //-------------------------------------------------------------
}


int main() {

    cin >> n;
    min_dist = 1e9;

    for(int i = 0; i < n; i++) {

        cin >> ls[i].x >> ls[i].y;

        ls[i].x += eps;
        ls[i].y += eps;
        ls[i].id = i;
    }

    sort_x(0, n-1);
    solve(0, n-1);


    if(best_pair.ff > best_pair.ss) swap(best_pair.ff, best_pair.ss);

    cout << best_pair.ff << " " << best_pair.ss << " " << fixed << setprecision(6) << min_dist << "\n";

    return 0;
}


//_____________________________________________________________________________________________




//////////////////////////////////////////////////////////////////////////////////////////////
******************************* String processing ********************************************
//////////////////////////////////////////////////////////////////////////////////////////////



********** KMP : Knuth–Morris–Pratt string processing algorithm ************

vi kmp(string pattern) {
    
    int n = pattern.size();
    vi prf(n);
    
    for(int i = 1; i < n; i++) {
        int j = prf[i-1];

        while(j > 0 && pattern[j] != pattern[i]) j = prf[j-1];
        if(pattern[j] == pattern[i]) j++;

        prf[i] = j;
    }
    return prf;
}

vi naive_kmp(string pattern) {
    vi ret;

    for(int i = 0; i < pattern.size(); i++) {
        int x = 0;
        for(int j = 0; j < i; j++) {

            int y = j+1, flg = 1;
            int lo = 0, hi = i-j;

            while(y--) {
                if(pattern[lo] != pattern[hi]) {
                    flg = 0; break;
                }
                else {
                    lo++; hi++;
                }
            }
            if(flg) x = j+1;
        }
        
        ret.push_back(x);
    }
    return ret;
}

// count of all occerance of prefixes of a string s

vi count_of_all_prefix_occerance(string s) {
    
    int n = s.size();

    vi pi = kmp(s);
    vi prefix_count(n+1);

    for(int i = 0; i < n; i++) prefix_count[pi[i]]++;
    for(int i = n-1; i > 0; i--) prefix_count[pi[i-1]] += prefix_count[i];
    for(int i = 1; i <= n; i++) prefix_count[i]++;

    return prefix_count;
}

// total distinct substring

int distinct_substring(string s) {
    int ret = 0;
    for(int i = 0; i < s.size(); i++) {
        vi v = kmp(s.substr(i, s.size()));
        int x = max_ele(v);
        ret += ((s.size()-i)-x);
    }
    return ret;
}


//************************************************************************


*********************************** Hashing **************************************


// my raw template **********************************

// 7 digit prime
1011001 3109081 4136537 4612717 8288213 6346973 2111309 3907529 2244163 3007241 5992073
1010003 4470911 3379289 3454183 1400261 3613321 3516011 7888207 6134743 5394139 9476743

// 10 digit prime
9123457199 9123457381 9123457663 9123457423 9123457529 9123457529 9123457051 9123457631 9123457117 9123457523
9123457163 9123457663 9123457769 9123457117 9123456791 9123457177 9123457423 9123457769 9123457481 

// 16 difit prime
1737476797107127

// fixed string hash : do double hash
int string_hash(string s, int b, int m) {
 
    ll ret = 0;
    ll power = 1;
 
    for(char c : s) {
        ret = (ret + (((int)c) * power)) % m;
        power = (power * b) % m;
    }
    return (int)ret;
}
 
// Rabin-karp  | all occerance of pattern in text
vi rabin_karp(string pattern, string text, ll b, ll m) {

    int p = pattern.size(), t = text.size();

    vl power(max(t, p));
    power[0] = 1;

    for(int i = 1; i < power.size(); i++) power[i] = (power[i-1] * b) % m;

    vl text_hash(t + 1);
    for(int i = 0; i < t; i++) {
        text_hash[i+1] = (text_hash[i] + (text[i] - 'a' + 1) * power[i]) % m;
    }

    ll pattern_hash = 0;
    for(int i = 0; i < p; i++) {
        pattern_hash = (pattern_hash + (pattern[i] - 'a' + 1) * power[i]) % m;
    }

    vi occer;

    for(int i = 0; i + p - 1 < t; i++) {

        ll hash = (text_hash[i + p] - text_hash[i] + m) % m;
        
        if(hash == pattern_hash * power[i] % m) {
            occer.push_back(i);
        }
    }
    return occer;
}

// substring match of a string
vl rolling_hash(string txt, ll b, ll m) {
    int t = txt.size();

    vl power(t); power[0] = 1;
    for(int i = 1; i < t; i++) power[i] = (power[i-1] * b) % m;

    vl h(t+1);
    for(int i = 0; i < t; i++) h[i+1] = (h[i] + (txt[i]-'a'+1) * power[i]) % m;

    return h;
}

bool substring_match_by_rolling_hash(int a, int b, int l, vl &h1, vl &h2, vl &power1, vl &power2) {

    ll ah1 = (h1[a+l] + 1400261 - h1[a]) % 1400261;
    ah1 = (ah1 * power1[b-a]) % 1400261;

    ll ah2 = (h2[a+l] + 3613321 - h2[a]) % 3613321;
    ah2 = (ah2 * power2[b-a]) % 3613321;
    
    ll bh1 = (h1[b+l] + 1400261 - h1[b]) % 1400261;
    ll bh2 = (h2[b+l] + 3613321 - h2[b]) % 3613321;

    if(ah1 == bh1 && ah2 == bh2) return 1;
    return 0;
}

// occerance count by rolling hash
inline int occerance(const string &word, const string &text, const ll &b, const ll &m) {

    int w = word.size(), t = text.size();

    vl power(t);
    power[0] = 1;
    for(int i = 1; i < t; i ++) power[i] = (power[i-1] * b) % m;        

    ll wh = 0;
    for(int i = 0; i < w; i++) wh = (wh + (word[i] - 'A' + 1) * power[i]) % m;

    vl th(t+1);
    for(int i = 0; i < t; i++) th[i+1] = (th[i] + (text[i] - 'A' + 1) * power[i]) % m;

    int cnt = 0; 

    for(int i = 0; i+w-1 < t; i++) {
        ll t1_hash = (th[i+w] + m - th[i]) % m;
        ll w1_hash = (wh * power[i]) % m;
        
        if(t1_hash == w1_hash) cnt++;
    }

    return cnt;
}


// template edited by tanima ***********************************

/***
 * 
 * String hashing with double hash
 * Get the forward and reverse hash of any substring
 * Complexity - O(n) to build and O(1) for substring hash query
 * Calculating Hash in 1 based but the ind,l,r are 0 based
 * You can not pass C++ std::string as the argument in the StringHash function, you must pass array of character
 *
***/

#include <bits/stdc++.h>
using namespace std;

const int PRIMES[] = {2147462393, 2147462419, 2147462587, 2147462633, 2147462747, 2147463167, 2147463203, 2147463569, 2147463727, 2147463863, 2147464211, 2147464549, 2147464751, 2147465153, 2147465563, 2147465599, 2147465743, 2147465953, 2147466457, 2147466463, 2147466521, 2147466721, 2147467009, 2147467057, 2147467067, 2147467261, 2147467379, 2147467463, 2147467669, 2147467747, 2147468003, 2147468317, 2147468591, 2147468651, 2147468779, 2147468801, 2147469017, 2147469041, 2147469173, 2147469229, 2147469593, 2147469881, 2147469983, 2147470027, 2147470081, 2147470177, 2147470673, 2147470823, 2147471057, 2147471327, 2147471581, 2147472137, 2147472161, 2147472689, 2147472697, 2147472863, 2147473151, 2147473369, 2147473733, 2147473891, 2147473963, 2147474279, 2147474921, 2147474929, 2147475107, 2147475221, 2147475347, 2147475397, 2147475971, 2147476739, 2147476769, 2147476789, 2147476927, 2147477063, 2147477107, 2147477249, 2147477807, 2147477933, 2147478017, 2147478521, 2147478563, 2147478649, 2147479447, 2147479589, 2147480707, 2147480837, 2147480927, 2147480971, 2147481263, 2147481311, 2147481337, 2147481367, 2147481997, 2147482021, 2147482063, 2147482081, 2147482343, 2147482591, 2147483069, 2147483123};
long long basemod[5];

/// use init only once at the start of the code in the main function before declaring the hash (you can use init at start of multiple test case but do not use init more than once for each test case)

void init(){
    unsigned int seed = chrono::system_clock::now().time_since_epoch().count();
    
    /// to avoid getting hacked in CF, comment this line for easier debugging
    srand(seed);  

    int q_len = (sizeof(PRIMES) / sizeof(PRIMES[0])) / 4;
    basemod[0] = PRIMES[rand() % q_len];
    basemod[1]  = PRIMES[rand() % q_len + q_len];
    basemod[2] = PRIMES[rand() % q_len + 2 * q_len];
    basemod[3]  = PRIMES[rand() % q_len + 3 * q_len];
}
struct SingleHash{
    long long base, mod;
    int len;
    vector <int> basepow, f_hash, r_hash;

    SingleHash() {}
    SingleHash(const char* str, long long base, long long mod): base(base), mod(mod){
        len = strlen(str);
        basepow.resize(len + 3, 1), f_hash.resize(len + 3, 0), r_hash.resize(len + 3, 0);

        for (int i = 1; i <= len; i++){
            basepow[i] = basepow[i - 1] * base % mod;
            f_hash[i] = (f_hash[i - 1] * base + str[i - 1] + 1007) % mod;
        }

        for (int i = len; i >= 1; i--){
            r_hash[i] = (r_hash[i + 1] * base + str[i - 1] + 1007) % mod;
        }
    }

    inline int forward_hash(int l, int r){
        int h = f_hash[r + 1] - ((long long)basepow[r - l + 1] * f_hash[l] % mod);
        return h < 0 ? h + mod : h;
    }

    inline int reverse_hash(int l, int r){
        int h = r_hash[l + 1] - ((long long)basepow[r - l + 1] * r_hash[r + 2] % mod);
        return h < 0 ? h + mod : h;
    }
    inline int insert_update(int ind, char c){ //This won’t change the value in hashing template. It will just give the modified value for a single query
        long long l = ((f_hash[ind]*base)%mod+(c+1007))%mod;
        long long r = forward_hash(ind,len-1);
        return ((l*basepow[len-ind])%mod+r)%mod;
    }
    inline int erase_update(int ind){//This won’t change the value in hashing template. It will just give the modified value for a single query
        long long l=f_hash[ind];
        long long r=(ind+1<len)? forward_hash(ind+1,len-1):0LL;
        return ((l*basepow[len-ind-1])%mod+r)%mod;
    }
    inline int replace_update(int ind, char c){//This won’t change the value in hashing template. It will just give the modified value for a single query
        long long l = ((f_hash[ind]*base)%mod+(c+1007))%mod;
        if(ind+1<len) l=(l*basepow[len-ind-1])%mod;
        long long r = (ind+1<len)? forward_hash(ind+1,len-1):0LL;
        return (l+r)%mod;
    }
};

struct StringHash{
    SingleHash sh1, sh2;
    StringHash() {}
    StringHash(const char* str){
        int base_1 = basemod[0];
        int mod_1  = basemod[1];
        int base_2 = basemod[2];
        int mod_2  = basemod[3];

        sh1 = SingleHash(str, base_1, mod_1);
        sh2 = SingleHash(str, base_2, mod_2);
    }

    /// returns the hash of the substring from indices l to r (inclusive)
    long long forward_hash(int l, int r){
        return ((long long)sh1.forward_hash(l, r) << 32) ^ sh2.forward_hash(l, r);
    }

    /// returns the hash of the reversed substring from indices l to r (inclusive)
    long long reverse_hash(int l, int r){
        return ((long long)sh1.reverse_hash(l, r) << 32) ^ sh2.reverse_hash(l, r);
    }
    long long insert_update(int ind,char c){
        return ((long long)sh1.insert_update(ind, c) << 32) ^ sh2.insert_update(ind, c);
    }
    long long erase_update(int ind){
        return ((long long)sh1.erase_update(ind) << 32) ^ sh2.erase_update(ind);
    }
    long long replace_update(int ind,char c){
        return ((long long)sh1.replace_update(ind, c) << 32) ^ sh2.replace_update(ind, c);

    }
    bool isPalin(int l, int r){ return (forward_hash(l,r)==reverse_hash(l,r));}
};

int main(){
    init();
    auto hasher = StringHash("abca");
    auto hasher1 = StringHash("acba");
    if(hasher.isPalin(0,3)) cout<<"String is palindrome"<<endl;

    if(hasher.forward_hash(0,3)!=hasher1.forward_hash(0,3))
        cout<<"Doesn't match"<<endl;

    if(hasher.replace_update(2,'b')==hasher1.replace_update(1,'b'))
        cout<<"Matches"<<endl;

    if(hasher.forward_hash(0,3)!=hasher1.forward_hash(0,3))
        cout<<"Doesn't match"<<endl;

    if(hasher.erase_update(2)==hasher1.erase_update(1))
        cout<<"Matches"<<endl;

    if(hasher.forward_hash(0,3)!=hasher1.forward_hash(0,3))
        cout<<"Doesn't match"<<endl;

    if(hasher.insert_update(3,'b')==hasher1.insert_update(1,'b'))
        cout<<"Matches"<<endl;
    return 0;
}



// template edited by me ***********************************
// Hashing template ------------------------------------------------------------------------

int base_1, base_2, mod_1, mod_2;
void init_hash() {
    const vi h_primes = {2147462393, 2147462419, 2147462587, 2147462633, 2147462747, 2147463167, 2147463203, 2147463569, 2147463727, 2147463863, 2147464211, 2147464549, 2147464751, 2147465153, 2147465563, 2147465599, 2147465743, 2147465953, 2147466457, 2147466463, 2147466521, 2147466721, 2147467009, 2147467057, 2147467067, 2147467261, 2147467379, 2147467463, 2147467669, 2147467747, 2147468003, 2147468317, 2147468591, 2147468651, 2147468779, 2147468801, 2147469017, 2147469041, 2147469173, 2147469229, 2147469593, 2147469881, 2147469983, 2147470027, 2147470081, 2147470177, 2147470673, 2147470823, 2147471057, 2147471327, 2147471581, 2147472137, 2147472161, 2147472689, 2147472697, 2147472863, 2147473151, 2147473369, 2147473733, 2147473891, 2147473963, 2147474279, 2147474921, 2147474929, 2147475107, 2147475221, 2147475347, 2147475397, 2147475971, 2147476739, 2147476769, 2147476789, 2147476927, 2147477063, 2147477107, 2147477249, 2147477807, 2147477933, 2147478017, 2147478521, 2147478563, 2147478649, 2147479447, 2147479589, 2147480707, 2147480837, 2147480927, 2147480971, 2147481263, 2147481311, 2147481337, 2147481367, 2147481997, 2147482021, 2147482063, 2147482081, 2147482343, 2147482591, 2147483069, 2147483123};
        
    // taking reandom prime as base and mod with seeding
    unsigned int seed = chrono::system_clock::now().time_since_epoch().count();
    srand(seed);  

    int q_len = (h_primes.size() / 4);

    base_1 = h_primes[rand() % q_len];
    mod_1  = h_primes[rand() % q_len + q_len];
    
    base_2 = h_primes[rand() % q_len + 2 * q_len];
    mod_2  = h_primes[rand() % q_len + 3 * q_len];
}

struct SingleHash{
    long long base, mod;
    vector <int> basepow, f_hash, r_hash;

    SingleHash() {}
    SingleHash(const string &str, long long base, long long mod): base(base), mod(mod){
        int len = str.size();
        basepow.resize(len + 3, 1), f_hash.resize(len + 3, 0), r_hash.resize(len + 3, 0);

        for (int i = 1; i <= len; i++){
            basepow[i] = basepow[i - 1] * base % mod;
            f_hash[i] = (f_hash[i - 1] * base + str[i - 1] + 1007) % mod;
        }

        for (int i = len; i >= 1; i--){
            r_hash[i] = (r_hash[i + 1] * base + str[i - 1] + 1007) % mod;
        }
    }

    inline int forward_hash(int l, int r){
        int h = f_hash[r + 1] - ((long long)basepow[r - l + 1] * f_hash[l] % mod);
        return h < 0 ? h + mod : h;
    }

    inline int reverse_hash(int l, int r){;
        int h = r_hash[l + 1] - ((long long)basepow[r - l + 1] * r_hash[r + 2] % mod);
        return h < 0 ? h + mod : h;
    }
};

struct StringHash{
    SingleHash sh1, sh2;

    StringHash(const string &str){

        sh1 = SingleHash(str, base_1, mod_1);
        sh2 = SingleHash(str, base_2, mod_2);
    }

    /// returns the hash of the forward substring from indices l to r (inclusive)
    long long forward_hash(int l, int r){
        return ((long long)sh1.forward_hash(l, r) << 32) ^ sh2.forward_hash(l, r);
    }

    /// returns the hash of the reversed substring from indices l to r (inclusive)
    long long reverse_hash(int l, int r){
        return ((long long)sh1.reverse_hash(l, r) << 32) ^ sh2.reverse_hash(l, r);
    }

    bool isPalin(int l, int r){ return (forward_hash(l,r)==reverse_hash(l,r));}
};
// ---------------------------------------------------------------------------------------



***************************** Z - Algorithm ********************************

vi z_array(string s) {
    int n = s.size();
    vi ret(n);

    int lo = 0, hi = 0;
    for(int i = 1; i < n; i++) {

        if(hi <= i) { 
            lo = 0; hi = i;
            while(hi < n && s[lo] == s[hi]) {
                lo++; hi++;
                ret[i]++;    
            }
        }
        else{
            int j = 1;
            while(j < lo) {
                ret[i] = ret[j];
                if(ret[i]+i >= hi) {
                    ret[i] = min(hi-i, ret[i]);
                    lo = ret[i];
                    while(hi < n && s[lo] == s[hi]) {
                        lo++; hi++;
                        ret[i]++;   
                    }
                    i++;
                    break;
                }
                i++; j++;
            }
            i--;
        }
    }
    return ret;
}

// a smalla implementation

vi z_array(string s) {
    int len = s.size();
    vi z(len); int left, right; left = right = 0;

    for(int i = 1; i < len; i++) {
        if(i <= right) 
            z[i] = min(z[i - left], right - i + 1]);
        while(i + z[i] < len && s[i+z[i]] == s[z[i]]) z[i]++;
        if(i + z[i] - 1 > right)
            left = i; right = i + z[i] - 1;
    }
    return z;
}


***************************** unordered map ********************************

unordered_map is a data structure like map but it is more than 4 times faster than map.
you can use it in C++11 with including 
#include<unordered_map>

e.g.
//--------------------------------------------------
#include<unordered_map>
using namespace std;
int main(){
  unordered_map<int,int>mp;
  mp[5]=12;
  mp[4]=14;
  cout<<mp[5]<<' '<<mp[4]<<endl;//prints: 12 14
}
//--------------------------------------------------

for custom data type we have to change the HASH function for unordered map.
e.g.

//--------------------------------------------------
struct HASH{
  size_t operator()(const pair<int,int>&x)const{
    return hash<long long>()(((long long)x.first)^(((long long)x.second)<<32));
  }
};

unordered_map<pair<int,int>,int,HASH>mp;
//--------------------------------------------------



***************************** Ordered Set / PBDS ********************************

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;


template <typename T>   
    using ordered_set = tree<T, null_type, less<T>, 
        rb_tree_tag, tree_order_statistics_node_update>;
// if you want the element to be ordered greatest > to > lowest "instead of" lowest < to < greatest
// use greater<T> "instead of" less<T>
template <typename T>   
    using ordered_set = tree<T, null_type, greater<T>, 
        rb_tree_tag, tree_order_statistics_node_update>;


int main() {

    ordered_set<int> ost;

    ost.insert(2);
    ost.insert(5);
    ost.insert(1);
    ost.insert(9);
    ost.insert(6);
    ost.insert(5);

    // ost.find_by_order(k)
    // return the pointer of the k'th index
    debug(*ost.find_by_order(0));
    debug(*ost.find_by_order(1));
    debug(*ost.find_by_order(2));
    debug(*ost.find_by_order(3));
    debug(*ost.find_by_order(4));

    // ost.order_of_key(x)
    // return the index of the value x
    debug(ost.order_of_key(9));
    debug(ost.order_of_key(6));
    debug(ost.order_of_key(5));
    debug(ost.order_of_key(2));
    debug(ost.order_of_key(1));
}


***************************** Manachers algorithm ********************************

/***
 *
 * Manacher's algorithm to generate longest palindromic substrings for all centers
 * For a string of length n, returns a vector pal, of size 2 * n - 1
 * When i is even, pal[i] = largest palindromic substring centered from str[i / 2]
 * When i is odd,  pal[i] = largest palindromic substring centered between str[i / 2] and str[i / 2] + 1
 *
***/

vector <int> manacher(const string& str){
    int i, j, k, l = str.size(), n = l << 1;
    vector <int> pal(n);

    for (i = 0, j = 0, k = 0; i < n; j = max(0, j - k), i += k){
        while (j <= i && (i + j + 1) < n && str[(i - j) >> 1] == str[(i + j + 1) >> 1]) j++;
        for (k = 1, pal[i] = j; k <= i && k <= pal[i] && (pal[i] - k) != pal[i - k]; k++){
            pal[i + k] = min(pal[i - k], pal[i] - k);
        }
    }

    pal.pop_back();
    return pal;
}

int main(){
    assert(manacher("abababbaa") == vector<int>({1, 0, 3, 0, 5, 0, 5, 0, 3, 0, 1, 4, 1, 0, 1, 2, 1}));
    return 0;
}

// ------------------------------------------------------------------------------------------




//////////////////////////////////////////////////////////////////////////////////////////////
*********************************************************************************************
//////////////////////////////////////////////////////////////////////////////////////////////


int main(){

    //-------------------
    //-------------------
    //-------------------
    //-------------------
    //-------------------

    return 0;
}
