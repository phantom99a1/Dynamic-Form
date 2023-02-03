#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
bool f[N];
void sieve(int N){
    for(int i=0;i<=N;i++)
        f[i]=true;
    f[0]=f[1]=false;
    for(int i=2;i*i<=N;i++)
        for(int j=i*i;j<=N;j++)
            if(f[i])
                f[j]=false;
}
int main(){
    sieve(N);
    int t;
    cin>>t;
    while(t--){
        int a,b,res=0;
        cin>>a>>b;
        for(int i=sqrt(a)/3;i<=sqrt(b)/3;i++)
        {
            if(f[i]&&(9*i*i>=a))
                res++;
        }
        cout<<res<<endl;
    }
}