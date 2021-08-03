#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a;
        vector<int> b;
        multiset<int> s;
        multiset<int> s2;
        int n;
        cin >> n;
        ll sum1 = 0;
        ll sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            int ass;
            cin >> ass;
            a.push_back(ass);

            sum1 += a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int ass;
            cin >> ass;
            b.push_back(ass);
            sum2 += b[i];
        }
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (sum1==sum2)
        {
            multimap<int, int> m;
            vector<int> l;
            vector<int> l2;
            for (int i = 0; i < n; i++)
            {
                if (a[i] > b[i])
                {
                    for (int j = 0; j < a[i] - b[i]; j++)
                    {
                        l.push_back(i + 1);
                    }
                }
                else
                {
                    for (int j = 0; j < b[i] - a[i]; j++)
                    {
                        l2.push_back(i + 1);
                    }
                }
            }
            for (int i = 0; i < l.size(); i++)
            {
                m.insert({l[i], l2[i]});
            }
            cout << m.size() << endl;
            for (auto e : m)
            {
                cout << e.first << " " << e.second << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}