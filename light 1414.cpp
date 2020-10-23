//----> bismillahir rahmanir rahim <---- -- { ^ _ ^ }
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

#define MOD 1000000000
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


ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

//continue;
vl v;

long long leap(){
    for(int i=2000;i<=2e9;i++){
        if((i%4==0 ) && (i%100!=0 ) || (i%400==0)){
            v.PB(i);
        }
    }


}


//-----------------------------> YOUR JOURNEY STARTS HERE ------------------------------------>>
int main(){


    optimize();

    int t;
    cin>>t;
    leap();
  // char sh[]=

    for(int i=1;i<=t;i++){
           string space;
           cin>>space;
            string h;string k;
            long long ans=0;
            getline(cin,h);
                      //getline(cin,kl);
           k=space+h;
           char kl[k.length()+1];
           strcpy(kl,k.c_str());
                   //cout<<kl<<endl;
           long long date,year;
           char mo[20];
           sscanf(kl,"%s %d, %d",mo ,& date, & year);
         //  cout<<mo<<"  "<<date<< " "<<year<<endl;
map <string ,int>m;

      m["January"]=0;
      m["February"]=1;
      m["March"]=2;
      m["April"]=3;
      m["May"]=4;
      m["June"]=5;
      m["July"]=6;
      m["August"]=7;
      m["September"]=8;
      m["October"]=9,
      m["November"]=10;
       m["December"]=11;


      int   mo1=m[mo];
        if(mo1 <= 1 && date <29 && *lower_bound(v.begin(),v.end(),year)==year){
             ans++;
        }

         string spac;
           cin>>spac;
            string iii;string ki;

            getline(cin,iii);
                      //getline(cin,kl);
           ki=spac+iii;
           char kll[ki.length()+1];
           strcpy(kll,ki.c_str());
                   //cout<<kl<<endl;
           long long dat,yea;
           char maa[20];
           sscanf(kl,"%s %d, %d",maa,& dat, & yea);




        int mo2=m[maa];
        if(mo2 > 1  && *lower_bound(v.begin(),v.end(),yea)==yea){
             ans++;
        }
        long long kkk=lower_bound(v.begin(),v.end(),yea)-v.begin()-1;
         long long kk=upper_bound(v.begin(),v.end(),year)-v.begin();
         long long aaa=(kkk-kk);
         ans+=aaa;
         cout<<ans<<endl;

  }

            over
}
