#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, x;
        cin >> n >> m >> x;
        long long int xxx = (x - 1) % n;
        long long int yyy = (x - 1) / n;
        cout << xxx * m + 1 + yyy << endl;
        //i still astonished why -1 !
        //without this my submission is 20 min!
        //it takes 2 hour !
    }
}
