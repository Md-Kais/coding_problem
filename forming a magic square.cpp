#include<bits/stdc++.h>
#define max 100000
using namespace std;

int main()
{
 set<int>s;
 int nai[9999]={0};
 int j=0;
int korte[999]={0};
for(int i=0;i<9;i++){
    int a;cin>>a;
    if(s.count(a)==0){
        s.insert(a);
    }
    else{
        nai[j]=a;
        j++;
    }
}
int k=0;
for(int i=1;i<=9;i++){
    if(s.count(i)==0){
        korte[k]=i;
        k++;
    }
}
long long ans=0;
sort(nai,nai+j);
sort(korte,korte+k);
for(int i=0;i<k;i++){
     ans+=abs(nai[i]-korte[i]);
}
cout<<ans<<endl;
return 0;
}
