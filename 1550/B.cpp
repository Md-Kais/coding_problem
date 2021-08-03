#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        string h;
        cin >> h;
        if (b >= 0)
        {
            cout << n * (a + b) << endl;
        }
        else
        {
            //count how many times add b;
            int countDiff = 0;
            for (int i = 0; i < n; i++)
            {
                if (h[i] != h[i + 1])
                {
                    countDiff++;
                }
            }
            cout << ((countDiff / 2) + 1) * b + a * n << endl;

            //or can check 1 and 0 how many times occurs consecutively and determine the value and then output the maximimum ans.

        }
    }
}