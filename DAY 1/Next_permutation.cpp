class Solution {
public:
    void nextPermutation(vector<int>& nums) {

         if(nums.size()==1) return ;
         vector<int>temp;

         for(int a=0;a<nums.size();a++){
             temp.push_back(nums[a]);
         }
         sort(temp.begin(),temp.end(),greater<int>());
         if(temp==nums){
             sort(nums.begin(),nums.end());
             return ;
         }
    map<int,int>m;
    for(int i=nums.size()-2;i>=0;i--){
        m[nums[i+1]]=i+1;
        if(nums[i]<nums[i+1]){
            for(auto it:m){
                if(it.first>nums[i]){
                    swap(nums[i],nums[it.second]);
                    sort(nums.begin()+i+1,nums.end());
                    return ;
                    
                }
            }
        }
    }
    
    }
};
