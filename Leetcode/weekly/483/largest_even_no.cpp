class Solution {
public:
    string largestEven(string s) {
       for(int j=s.size()-1;j>=0;j--){
           if(s[j]=='0'||s[j]=='2'||s[j]=='4'||s[j]=='6'||s[j]=='8')return s;
           else{
               s.pop_back();
           }
       } 
        return s;
    }
};