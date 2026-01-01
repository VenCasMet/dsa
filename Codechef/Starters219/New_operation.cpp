#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> v;
        for(long long j=0;j<n;j++){
            long long a;
            cin>>a;
            v.push_back(a);
        }
        long long minsum=v[0],maxsum=v[n-1];
        for(int j=1;j<n;j++){
            minsum+=2*v[j];
        }
        for(int j=n-2;j>=0;j--){
            maxsum=2*maxsum+v[j];
        }
        cout<<min(minsum,maxsum)<<" "<<max(minsum,maxsum)<<endl;
    }
}