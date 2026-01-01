class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int car=1;
        for (int j=digits.size()-1;j>=0;j--){
            int sum=digits[j]+car;
            digits[j]=sum%10;
            car=sum/10;
        }
        if(car){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};