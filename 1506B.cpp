#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        string s;
        cin >> n >> m;
        cin >> s;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                v.push_back(i);
            }
        }
        // for(auto e: v){
        //     cout<<e<<endl;
        // }
        //sliding window
        int i=v[0];
        for(int i=i;i<)

        //cout<<ans<<endl;
    }
}