#include<bits/stdc++.h>
using namespace std;
typedef long long ll;typedef double dl;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef map<int,int>mi;
typedef map<string,int>mis;
typedef multimap<int,int>muli;
typedef multiset<int>si;
#define S second
#define Y cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define PB push_back
#define ki 1LL
#define MOD 1000000000
#define yes cout<<"Yes"<<endl;
#define ts int t;cin>>t;while(t--)
#define no cout<<"No"<<endl;
#define endl "\n"
#define F first
const double PI = acos(-1);
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }


int getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);


    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }

}

int main()
{
    optimize();
    //ALLAH IS ALMIGHTY
    //decoy
    //BISMILLAH
    //tumi parbe
    ts{
              vector<int>v;
    int n;
    cin>>n;multiset<int>m;
    set<int>s;

    for(int i=0;i<n;i++){
        int a;
        cin>>a;
       v.PB(a);
        m.insert(a);
         s.insert(a);

    }
    int k=0;
    for(auto e: s){
        if(m.count(e)==1){
            cout<<getIndex(v,e)+1<<endl;
            k++;
            break;
        }
    }
    if(k==0){
        cout<<-1<<endl;
    }
    }
        return 0;
}
