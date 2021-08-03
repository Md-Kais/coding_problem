

#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;

//<--------------------------------------------typo section--------------------------------------------->
typedef long long ll;
typedef vector<int> vi;

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
vector<long long int> vl;
void hola()
{

    string s1 = "111111111111111";
    string s2 = "222222222222222";
    string s3 = "333333333333333";
    string s4 = "444444444444444";
    string s5 = "555555555555555";
    string s6 = "666666666666666";
    string s7 = "777777777777777";
    string s8 = "888888888888888";
    string s9 = "999999999999999";
    string a1, a2, a3, a4, a5, a6, a7, a8, a9;
    long long int hello;
    for (int i = 1; i < 10; i++)
    {
        a1 = s1.substr(1, i);
        hello = stoi(a1);
        vl.push_back(hello);

        a2 = s2.substr(1, i);
        hello = stoi(a2);
        vl.push_back(hello);

        a3 = s3.substr(1, i);
        hello = stoi(a3);
        vl.push_back(hello);
        a4 = s4.substr(1, i);
        hello = stoi(a4);
        vl.push_back(hello);
        a5 = s5.substr(1, i);
        hello = stoi(a5);
        vl.push_back(hello);
        a6 = s6.substr(1, i);
        hello = stoi(a6);
        vl.push_back(hello);
        a7 = s7.substr(1, i);
        hello = stoi(a7);
        vl.push_back(hello);
        a8 = s8.substr(1, i);
        hello = stoi(a8);
        vl.push_back(hello);
        a9 = s9.substr(1, i);
        hello = stoi(a9);
        vl.push_back(hello);
    }
}
int main()
{

    optimize();
    hola();
    test
    {

        int n;
        cin >> n;
        int ans = 0;
        for (auto e : vl)
        {
            if (e > n)
            {
                break;
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

    over
}
