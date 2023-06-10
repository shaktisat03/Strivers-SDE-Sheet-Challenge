ass Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i=0,j=0;
        int maxi= INT_MIN;
        int sum=0;
        while(j<nums.size()){
            sum+=nums[j];
            maxi= max(maxi,sum);
            if(sum>=0){
                j++;
            }
            else{
                j++;i=j;
                sum=0;
            }
        }
        return maxi;
    }
};
