#include<iostream>
#include<cstdio>
#define M 1000000007
using namespace std;

long long int power(long long a,long long b)
{
    if(b==0)
        return 1;
    else if(b==1)
        return a;
    else if(b%2==0)
        return power((a*a),b/2);
    else
        return (power((a*a),b/2)*a);
}
int main(){


int n;


cin>>n;

cout<<power(2,n+1)-2<<endl;

}
