class Solution {
public:

    void recFunction(int index, int target, vector<int>&nums, vector<int>& candidates, vector<vector<int>>& ans){
      if(index == candidates.size()) {
        if(target == 0) {
         ans.push_back(nums);
        }
         return;
       }
       if(candidates[index] <= target){
        nums.push_back(candidates[index]);
        
        recFunction(index, target - candidates[index], nums, candidates, ans);
        nums.pop_back();
       }
        
        
        recFunction(index + 1, target, nums, candidates, ans);
        }
    

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> nums;
        vector<vector<int>> ans;
        recFunction(0, target, nums, candidates, ans);
        return ans;
    }
};