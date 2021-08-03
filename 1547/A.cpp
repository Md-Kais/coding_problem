#include<bits/stdc++.h>
using namespace std;
int main(){


    int t;cin>>t;
    while(t--){
        long long ans1 = __INT_FAST32_MAX__, ans2 = __INT_FAST32_MAX__, ans3 = __INT_FAST32_MAX__;
        int xa,xb,xf,ya,yb,yf;
        cin >> xa>>ya>>xb>>yb>>xf>>yf;
        if((xa==xb && xa==xf) && ((ya<yf && yb>yf) || (yb<yf && ya>yf))){
            ans1 = abs(yb - ya) + 2;
        }
        else if ((ya == yb && yf==ya)&& ((xa < xf && xb > xf) || (xb<xf && xa>xf)))
        {
            ans2 = abs(xb - xa) + 2;
        }
        else{
            ans3 = abs(xa - xb) + abs(ya - yb);
        }
        cout<<min(min(ans1,ans2),ans3)<<endl;
    }
}