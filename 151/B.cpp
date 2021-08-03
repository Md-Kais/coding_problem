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

int main(){
    optimize();
    vector<string>name;
    vector<string>taxi;

            vector<string>girl;

            vector<string>res;
multiset<string>st;multiset<string>sg; multiset<string>sr;
    test{
            int n;cin>>n;string h;cin>>h;name.PB(h);

            for(int i=0;i<n;i++){
                string p;
                cin>>p;
                set<char>s{0};
                vector<int>v;vector<int>match;set<int,greater<int>>suck;//for suck my head;
                for(int i=0;i<p.length();i++){
                        if(p[i]!='-'){
                            s.insert(p[i]);
                            v.PB(p[i]-'0');
                            suck.insert(p[i]-'0');
                        }

                }
                match.assign(suck.begin(),suck.end());
                //assign assign vector;
                

         /*   for(auto e: match){
                    cout<<e<<endl;
                }*/
          //      cout<<v.size()<<endl;
                if(s.size()-1==1){
                 st.insert(h);
                }
                else if(v==match){
                    sr.insert(h);
                }
                else{
                    sg.insert(h);
                }

            }
    }
int mat=-1;//max yaxi
int mag=-1;//max gir
int mar=-1;//max restaurent
    for(auto e: name){
     //   cout<<st.count(e)<<endl;
     int ta=st.count(e); mat=max(ta,mat);
     int gi=sg.count(e); mag=max(gi,mag);
     int re=sr.count(e); mar=max(re,mar);

     //   cout<<sr.count(e)<<endl;
    //    cout<<sg.count(e)<<endl;// cout<<mat<<" "<<mar<<" "<<mag;
    }
   for(auto e: name){
        if(st.count(e)==mat){
           taxi.PB(e);
        }
    }
    for(auto e: name){
        if(sr.count(e)==mar){
            res.PB(e);
        }
    }
   for(auto e: name){
        if(sg.count(e)==mag){
               girl.PB(e);
        }
    }
    /*for(auto e: taxi){
        cout<<e<<endl;
    }*/
 //   cout<<taxi[0]<<endl;cout<<taxi.size();
cout<<"If you want to call a taxi, you should call: ";
  for(int i=0;i<=taxi.size()-1;i++){
    cout<<taxi[i];
    if(i<taxi.size()-1){
        cout<<", ";
    }
  }
  cout<<".\n";

cout<<"If you want to order a pizza, you should call: ";
    for(int i=0;i<=res.size()-1;i++){
        cout<<res[i];
        if(i<res.size()-1){
            cout<<", ";
        }
    }
  cout<<".\n";

cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";

      for(int i=0;i<=girl.size()-1;i++){
        cout<<girl[i];
        if(i<girl.size()-1){
            cout<<", ";
        }
    }
  cout<<".\n";


over
}
