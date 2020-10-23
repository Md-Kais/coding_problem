// CPP program to illustrate the
// bitset::count() function
// when the input is an integer
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Initialisation of a bitset
    bitset<42> b1((10e9 )* 16);
    bitset<64> b2(18);

    // Function to count the
    // number of set bits in b1
    int result1 = b1.count();
    cout << b1 << " has " << result1
         << " set bit\n";

    // Function to count the
    // number of set bits in b2
    int result2 = b2.count();
    cout << b2 << " has " << result2
         << " set bit";

    return 0;
}
