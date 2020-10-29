#include<bits/stdc++.h>
#include <math.h>
#include <cstring>
#define MAX 1100000
using namespace std;

#define max 1000000
vector<int>primes; long long sieve(int a){bool arr[a]; for(int i=3;i*i<=a;i+=2){if(arr[i]==false){for(int j=i*i;j<=a;j+=i){arr[j]=true;}}}primes.push_back(2);
for(int i=3;i<=a;i+=2) if(arr[i]==false)primes.push_back(i);}



int main(){
 int n;cin>>n;int divisor=1;
   sieve(sqrt(n));for(auto e : primes){
    cout<<e<<endl;
  }
  for(int i=0;i<primes.size();i++){

    if(n%primes[i]==0){  int coun =1;

        while(n%primes[i]==0){
            n/=primes[i]; coun++;
        }
        divisor*=coun;
    }
  }

cout<<divisor<<endl;

}






