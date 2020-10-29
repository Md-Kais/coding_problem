#include<iostream>
#include <vector>//vector
#include<cstring>//for bool
using namespace std;

#define max 1000000
vector<int>primes;
long long sieve(int a){
     bool arr[max];//primarily false stored for every element arr


        for(int i=3;i*i<=a;i+=2){
            if(arr[i]==false){
                    for(int j=i*i;j<=a;j+=i){
                        arr[j]=true;
                    }
            }
        }
  primes.push_back(2);
      for(int i=3;i<=a;i+=2){
            if(arr[i]==false){
                primes.push_back(i);
            }
      }

}

int main(){
    int a;//prime
    cin>>a;
    sieve(a);
    for(auto e: primes){
        cout<<e<<endl;
    }

}
