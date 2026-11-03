class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            maxi = max(maxi, nums[i]);
        }
        int cnt = maxi*n;
        for(int i=0; i<n; i++){
            cnt -= nums[i];
        }
        return cnt;
    }
};