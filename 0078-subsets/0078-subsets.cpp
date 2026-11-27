class Solution {
public:
    void subsetFn(int index, vector<int>subset, vector<int>& nums, vector<vector<int>>& ans){
        if(index == nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[index]);
        subsetFn(index + 1, subset, nums, ans);
        subset.pop_back();
        subsetFn(index + 1, subset, nums, ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> ans;
        subsetFn(0, subset, nums, ans);
        return ans;
    }
};