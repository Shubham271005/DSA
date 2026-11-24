class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int subsets = 1 << n;
        set<vector<int>> ans;
        for(int i = 0; i < subsets; i++){
            vector<int>list = {};
            for(int j=0; j<n; j++){
                if(i & 1<<j) list.push_back(nums[j]);
            }
            ans.insert(list);
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};