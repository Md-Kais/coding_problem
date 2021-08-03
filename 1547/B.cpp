
#include <bits/stdc++.h>


using namespace std;

typedef long long ll;


int main()
{

    ll t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        string h;
        cin >> h;
        bool ans = true;
        set<char> s;
        vector<int> v;
        int maxx = -1;
        int miin = INT32_MAX;
        for (int i = 0; i < h.size(); i++)
        {
            s.insert(h[i]);
            int point = (h[i] - '0') - 49;
            v.push_back(point);
            maxx = max(point, maxx);
            miin = min(point, miin);
        }
        if (s.size() != h.length() || maxx!=s.size()-1 || miin!=0)
        {
            cout << "NO" << endl;
        }
        else
        {
            // for (auto e : v)
            // {
            //     cout << e << endl;
            // }
            vector<int> :: iterator itr;
            itr = find(v.begin(), v.end(), 0);
            int index=distance(v.begin(),itr);
       
            
            for(int i=index;i>0;i--){
                
                if(v[i]>v[i-1]){
                    ans=false;
                }
                
            }
            for(int i=index;i<h.length()-1;i++){
               
                if(v[i]>v[i+1]){
                    
                    ans=false;
                }
            }
            if(ans==true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}