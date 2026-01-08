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
        int val=0;
        sort(st.begin(),st.end());
        for(int j=0;j<n-1;j++){
            if(st[j]==st[j+1]){
                val++;
                break;
            }
        }
        if(val>0)cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}