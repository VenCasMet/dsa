#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string st;
        cin>>st;
        int o=0;
        int z=0;
        int ans=0;
        for(int j=0;j<n;j++){
            if(st[j]=='0')z++;
            else o++;
            if(o>=z)ans++;
        }
        cout<<ans<<endl;
    }

}