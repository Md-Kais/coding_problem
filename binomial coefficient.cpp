
#include<iostream>
using namespace std;

long long ans[1000][1000];

long long a(int n){

      for(int i=0;i<=n;i++){
        for(int j=0;j<=7;j++){
            if(j==i || j==i){
                ans[i][j]=1;
            }
            else{
                  ans[i][j]=ans[i-1][j-1]+ans[i-1][j];

            }
        }

      }



}




int main(){

   int n;cin>>n;
   a(n);
   cout<<ans[n][5]+ans[n][6]+ans[n][7]<<endl;



}
