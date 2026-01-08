#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v;
        for(int j=0;j<=n;j++){
            int a;
            cin>>a;
            v.push_back(a);
        }
        int ans=INT_MAX;
        for(int j=0;j<n;j++){
            ans=min(ans,max(v[j],v[j+1]));
        }
        cout<<ans<<endl;
    }

    return 0;
}