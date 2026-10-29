class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int l = 0, r = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 1){
                r++;
            } else if(nums[i] == 0){
                l = i;
                r = i;
            }
             maxi = max(maxi, r-l);
        }
        return maxi;
    }
};