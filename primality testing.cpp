#include <iostream>
using namespace std;
//more  :   https://www.tutorialspoint.com/primality-test-in-cplusplus
int primality_test(int n){
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0){
        return false;
    }
    for(int i=5;i*i<=n;i++){
        if(n%i==0 || n%(i+2)==0){

         return false;
        }
    }
    return true;

}

int main(){
    int n;
    cin>>n;
    if(primality_test(n)==true){
        cout<<n<< " is prime"<<endl;
    }
    else{
        cout<<n<<" s not prime"<<endl;
    }

    //cout<<n<<endl;
}

