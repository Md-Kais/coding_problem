#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
long long power(ll x,long long y,long long p){
    ll res=1;
    x=x%p;
    if(x==0) return 0;
    while(y>0){
        if(y &1)
            res=(res*x)%p;


            y=y>>1;
            x=(x*x)%p;

 }
 return res;
}
int main(){
    ll x,y,p;
    cin>>x>>y>>p;
    cout<<power(x,y,p)<<endl;



return 0;
}
