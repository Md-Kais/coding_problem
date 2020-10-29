#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
bool ifnotPrime(int prime[], int x) {
   return (prime[x/64]&(1<<((x>>1)&31)));
}
bool makeComposite(int prime[], int x) {
   prime[x/64]|=(1<<((x>>1)&31));
}
void bitWiseSieve(int n){
   int prime[n/64];
   memset(prime, 0, sizeof(prime));
   for (int i = 3; i<= sqrt(n); i= i+2) {
      if (!ifnotPrime(prime, i))
      for (int j=pow(i,2), k= i<<1; j<n; j+=k)
      makeComposite(prime, j);
   }
   for (int i = 3; i <= n; i += 2)
   if (!ifnotPrime(prime, i))
      printf("%d\t", i);
}
int main(){
   int N = 37;
   printf("All the prime number less than %d are 2\t", N);
   bitWiseSieve(N);
   return 0;
}
