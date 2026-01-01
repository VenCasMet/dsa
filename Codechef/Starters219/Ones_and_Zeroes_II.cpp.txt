#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt0=0,cnt1=0;
        for(char c:s){
            if(c=='1')cnt1++;
            else cnt0++;
        }
        int maxe=n;
        if(cnt0>cnt1)maxe-=(cnt0-cnt1);
        vector<int> ones;
        for(int i=0;i<n;i++){
            if(s[i]=='1')ones.push_back(i);
        }
        long long steps=0;
        int cur_bal=0;
        int ptr=0;
        for(int i=0;i<maxe;i++){
            if(ptr<ones.size()&&ones[ptr]==i){
                cur_bal++;
                ptr++;
            }
            else{
                cur_bal--;
            }
            if(cur_bal<0){
                steps+=(ones[ptr]-i);
                cur_bal+=2;
                ptr++;
            }
        }
        cout<<maxe<<" "<<steps<<endl;
	}
}
