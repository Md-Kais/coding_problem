#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    for(int i=1;i<=d;i++){
        if(k*i<=d){
            s.insert(k*i);
        }
        if(m*i<=d){
            s.insert(m*i);
        }
        if (l * i <= d)
        {
            s.insert(l * i);
        }
        if (n * i <= d)
        {
            s.insert(n * i);
        }
    }
    cout<<s.size()<<endl;
}