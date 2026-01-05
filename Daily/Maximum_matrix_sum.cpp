class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long neg=0,sum=0,z=0;
        int val=INT_MAX;
        for(int j=0;j<matrix.size();j++){
            for(int k=0;k<matrix[0].size();k++){
                if(matrix[j][k]<=0){
                    if(matrix[j][k]!=0){
                        neg++;
                    }
                    else z++;
                }
                sum+=abs(matrix[j][k]);
                val=min(val,abs(matrix[j][k]));
            }
        }
        if(z>0)neg++;
        if(neg%2==0){
            return sum;
        }
        if(val!=INT_MAX)sum=sum-2*val;
        return sum;
    }
};