///----> bismillahir rahmanir rahim <---- -- { ^ _ ^ }
///     { ^_^ }   { ^ _ ^ }
#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;

//<--------------------------------------------typo section--------------------------------------------->
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
typedef priority_queue<int>piwi;
typedef queue<int>kiwi;
typedef map<int,int>mi;
typedef map<string,int>mis;
typedef multimap<int,int>muli;
typedef multimap<string,int>muls;
typedef multiset<int>si;

//<----------------------------------------------------Narcos----------------------------------------------->
#define endl "\n"
#define Y cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
#define sp " "
#define PB push_back
#define F first
#define S second
#define as(a) (a).begin(),(a).end()
#define ras(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define ki 1LL
#define MOD 1000000007
#define over return 0;
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define test int t;cin>>t;while(t--)


//<-----------------------------------------------------Const--------------------------------------------------->
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;


//<--------------------------------------------------------------------------------------------------->
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

const long long MAX_SIZE = 1000001; vector<long long >isprime(MAX_SIZE , true); vector<long long >prime; vector<long long >SPF(MAX_SIZE); void manipulated_seive(int N) { isprime[0] = isprime[1] = false ; for (long long int i=2; i<N ; i++) { if (isprime[i]) { prime.push_back(i); SPF[i] = i; } for(int j=0;j < (int)prime.size() && i*prime[j] < N && prime[j] <= SPF[i]; j++) { isprime[i*prime[j]]=false; SPF[i*prime[j]] = prime[j] ; } } }
int man_seive(int n){ manipulated_seive(n); for(int i=0;i<prime.size() && prime[i]<=n;i++)
cout<<prime[i]<<endl;
}
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

//continue;

//-----------------------------> YOUR JOURNEY STARTS HERE ------------------------------------>>
 int a[4];
    int b[4];
   //check month
   const int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
   static inline void check(int d,int m,int y){

   //month >12: eta hote pare na,,r etaai shudhu 12 theke boro hote pare na
   if(m>12){
    return;
   }
   //jodi leap year hoy
   if(months[m]<d-(y%4==0 && m==2)){
        return;
   }
   if(a[2]-y>18 || a[2]-y==18 && a[1]>m || a[2]-y==18 && a[0]>=d && a[1]==m){
    Y
    exit(0);
   }

   }
int main(){
    optimize();

    scanf("%d.%d.%d",&a[0],&a[1],&a[2]);//take a;
    scanf("%d.%d.%d",&b[0],&b[1],&b[2]);//take b;
    sort(b,b+3);
    check(b[2], b[1], b[0]);
    check(b[1], b[2], b[0]);
    check(b[2], b[0], b[1]);
    check(b[0], b[2], b[1]);
    check(b[1], b[0], b[2]);
    check(b[0], b[1], b[2]);
    NO
over
}
