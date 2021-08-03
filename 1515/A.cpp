

#include <bits/stdc++.h>
using namespace std;

//<--------------------------------------------typo section--------------------------------------------->
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
//bees make honey
typedef double dl;

//<----------------------------------------------------Narcos----------------------------------------------->
#define endl "\n"
#define Y cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define sp " "
#define PB push_back
#define F first
#define S second
#define as(a) (a).begin(), (a).end()
#define ras(a) (a).rbegin(), (a).rend()
#define sz(x) (int)x.size()
#define ki 1LL
#define MOD 1000000000
#define over return 0;
#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

//<-----------------------------------------------------Const--------------------------------------------------->
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
// i make cummy
const ll infLL = 9000000000000000000;
//cholen shuru kori!

//<--------------------------------------------------------------------------------------------------->
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)
void faltu()
{
    cerr << endl;
}
template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

ll gcd(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }

//-----------------------------> YOUR DOOM STARTS HERE ------------------------------------>>
int main()
{

    optimize();

    test
    {

        int n, m;
        cin >> n >> m;
        int a[n + 1];
        vector<int>v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a,a+n);
        if (sum == m)
        {
            cout<< "NO" << endl;
        }

        else
        {
            int cum = 0;
            for (int i = 0; i < n; i++)
            {
                cum += a[i];
                if (cum != m)
                {
                    v.push_back(a[i]);
                    a[i]=0;
                }
            }
            for(int i=0;i<n;i++){
                if(a[i]!=0){
                    v.PB(a[i]);
                }
            }
            cout<<"YES"<<endl;
            for(auto e: v){
                cout<<e<<" ";
            }
            cout<<endl;
        }
    }

    over
}
