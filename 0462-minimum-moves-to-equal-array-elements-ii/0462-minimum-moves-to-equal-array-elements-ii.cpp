class Solution {
public:
    int minMoves2(vector<int>& nums) {
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