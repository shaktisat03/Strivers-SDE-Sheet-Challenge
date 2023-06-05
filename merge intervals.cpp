class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
         vector<vector<int>>ans;
    int n = intervals.size();
    sort(intervals.begin(),intervals.end());
    for(int i =0; i<n;i++){
        if(ans.empty())ans.push_back(intervals[i]);
        else{
            if(ans.back()[1]>=intervals[i][0]){
                vector<int>temp;
                temp.push_back(ans.back()[0]);
                temp.push_back(max(ans.back()[1],intervals[i][1]));
                ans.pop_back();
                ans.push_back(temp);
                
            }
            else ans.push_back(intervals[i]);
        }
    }
    return ans;
    }
};