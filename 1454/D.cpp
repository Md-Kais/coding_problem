//ALLAH WILL HELP ME
//nerd!
#include<bits/stdc++.h>
using namespace std;

//<--------------------------------------------typo section--------------------------------------------->
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
//bees make honey
typedef double dl;

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
#define MOD 1000000000
#define over return 0;
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define test int t;cin>>t;while(t--)


//<-----------------------------------------------------Const--------------------------------------------------->
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
// i make cummy
const ll infLL = 9000000000000000000;
//cholen shuru kori!

//<--------------------------------------------------------------------------------------------------->
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}


ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

map<long long ,long long ,greater<long long>>m{};
void factorize(long long n){
   int count = 0;//map<long long ,long long ,greater<long long>>m;
   while (!(n % 2)) {
      n/= 2;
      count++;
   } //cout<<2<<"\t"<<count<<endl;
   if (count)

      m.insert({count,2});
   for (long long i = 3; i <= sqrt(n); i += 2) {
      count = 0;
      while (n % i == 0) {
         count++;
         n = n / i;
      }
      if (count)
      //cout<<i<<"\t"<<count<<endl;
      m.insert({count,i});
   }
   if (n > 2)
   m.insert({1,n});
}




//continue;
/*
AKASH vora tara, **** mara SHARA
*/
//-----------------------------> YOUR DOOM STARTS HERE ------------------------------------>>
int main(){

    optimize();

    //test dekho

    test{
      long long a;
      cin>>a;
      factorize(a);
      int j=0;
     /*for(auto e: m){
        cout<<e.F<<" "<<e.S<<" "<<a<<endl;
      }*/

multiset<long long >mmm;
      for(auto e : m){
        for(int i=0;i<e.F;i++){ a/=e.S;
                if(a%e.S==0) mmm.insert(e.S);
                   // cout<<e.S<<" ";
        else{
                a*=e.S;//mmm.insert(a);
           break;
        }

        }
        j++;
        if(j>0){
            break;
        }

      }
      if(a>1){
       // cout<<a<<endl;
        mmm.insert(a);
      }

       m.clear();

       cout<<mmm.size()<<endl;
       for(auto e: mmm){
        cout<<e<<" ";
       }
       cout<<endl;
    }























   //ibra abracadabra




   //please remain calm





   //the end has arrived




   //Doom eternal




   //bleeding is doesnot matter if person is death
   //cholen vai bish khai




   //koi jabo jani na
   //ki likhi egula?
   //egula pore ki hobe?
   //portesen ken egula?




  // comment porte hoy na?






   //vapa pitha khai na
   //ami bish khai
   // shobai bish khay
   //aladdin
    //LAST LINE:THIS WORLD is full of cheaters,LIARS! I see them everywhere! their real face lives under their mask or niqab or hijab or their makeup! F Y A !
over
}
//okay! bye!
//parasite eve!
//can you feel my heart?
//doom eternal
//ibra
