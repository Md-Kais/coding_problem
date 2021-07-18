#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    ///xa+yb+zc=n; we have to maximize the number of (x+y+z);
    int ans = 0;
    for (int x = 0; x <= 4000; x++)
    {
        for (int y = 0; y <= 4000; y++)
        {
            int zc = n - (x * a + y * b);
            if (zc < 0)
            {
                break;
            }
            //if there is no fraction then we count it
            double z = (zc / (double)c);
            if (z == (int)z)
            {
                ans = max(ans, (int)(x + y + z));
            }
        }
    }
    cout << ans << endl;
    //unbounded knapsack ew kora jay! pore korum
}