class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int potential=nums[0];
        int count =1;
        for(int i =1;i<nums.size();i++){
          if(nums[i]==potential){
              count ++;
          }
          else {
              if(count==0){
                  potential= nums[i];
                  count=1;
              }
              else{
                  count--;
              }
          }
        }
          return potential;
    }
};
