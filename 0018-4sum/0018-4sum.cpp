class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
          sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        for(int i=0; i<n; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int m=i+1; m<n; m++){
                if(m > i + 1 && nums[m] == nums[m-1]) continue;
            int j = m+1;
            int k = n-1;
            while(j<k){
                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[m];
                if(sum > target){
                   k--;
                } else if(sum < target){
                    j++;
                } else {
                    ans.push_back({nums[i], nums[j], nums[k], nums[m]});
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++;
                    while(j<k && nums[k] == nums[k+1]) k--;
                }
            }
            }
        }
        return ans;
    }
};