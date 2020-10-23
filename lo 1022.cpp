///----> bismillahir rahmanir rahim <---- -- { ^ _ ^ }
///     { ^_^ }   { ^ _ ^ }
#include<bits/stdc++.h>

using namespace std;


int main(){

    //optimize();
int t;cin>>t;
for(int i=1;i<=t;i++){
    long double radius;
    cin>>radius;
    long double square=pow((radius*2),2);
    long double circle=3.141592653589732384626*((radius)*radius);
    double ans=(square-circle)+10e-9;
    cout<<"Case "<<i<<": ";
    printf("%.2lf\n",ans);
}
return 0;
}
