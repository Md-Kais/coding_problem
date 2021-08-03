#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef double dl;
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
#define MOD 1000000000
#define over return 0;
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define test int t;cin>>t;while(t--)
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}


ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
int main(){

    optimize();

    test{
        int n;
        cin>>n;
        if(n%3==0) cout<<n/3<<" "<<n/3<<endl;
        else{
            if(n==1) cout<<1<<" "<<0<<endl;
            else if(n==2) cout<<0<<" "<<1<<endl;
            else{
                int one=floor(n/3);
                int two=floor(n/3)+1;
                if(one+two*2==n) cout<<one<<" "<<two<<endl;
                else cout<<two<<" "<<one<<endl;
            }
        }
    }
  


over
}
