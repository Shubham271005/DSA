class Solution {
public:
    int minMoves2(vector<int>& nums) {
        // int cnt = 0;
        // int n = nums.size();
        // int mini = INT_MAX;
        // for(int i=0; i<n; i++){
        //     cnt = 0;
        //     for(int j=0; j<n; j++){
        //         int cnt = cnt + abs(nums[i] - nums[j]);
        //     }
        //     mini = min(cnt, mini);
        // }
        // return mini;

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int leftSum = 0;
        int rightSum = 0;
        for(int i=0; i<n/2; i++){
            leftSum += nums[i];
            rightSum += nums[n-i-1];
        }
        return rightSum - leftSum;
    }
};