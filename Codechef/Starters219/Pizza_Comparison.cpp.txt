#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        long long valb=100LL*b;
        long long vala=225LL*a;
        if(valb>vala) cout<<"Small\n";
        else if(valb<vala) cout<<"Large\n";
        else cout<<"Equal\n";
    }
    return 0;
}
