#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2)cout<<"-1"<<endl;
        else{
            vector<vector<int>> v(n,vector<int>(n,0));
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(j==0)v[j][k]=1;
                    if(k==n-1)v[j][k]=1;
                }
            }
            v[1][n-2]=1;
            v[2][n-2]=1;
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    cout<<v[j][k]<<" ";
                }
                cout<<endl;
            }
        }
    }

}
