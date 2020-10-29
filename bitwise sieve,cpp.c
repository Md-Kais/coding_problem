
#include<bits/stdc++.h>

using namespace std;

vector<int>primes;

bool ifnotprime(int prime[],int x){
        return (prime[x/64]&(1<<((x>>1)&31));
}
bool makeComposite(int prime[],int x){

        return  prime[x/64]|=(1<<((x>>1)&31));

}
void bitWiseSieve(int n){
      int prime[x/64];
      memset(prime,0,sizeof(prime));
      for(int i=3;i*i<=n;i+=2){
        if(!ifnotprime(prime,i)){
                for(int j=i*i,k<<1;j<=n;j+=k){
                    makeComposite(prime,j);
                }
           }
      }
}
primes,push_back(2);
for(int i=3;i<=n;i+=2){
        if(!ifnotprime(prime,i)){
            primes.push_back(i);

        }

}

int main(){
     int n;cin>>n;
     bitWiseSieve(n);
     for(auto e: primes){
            cout<<e<<endl;
     }

return 0;
}
