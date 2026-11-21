class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m = nums.size();
        int n = nums[0].size();
        int low = 0;
        int high = m-1;
        while(low <= high){
            int mid = (low + high)/2;

            if(nums[mid][0] <= target){
                if(nums[mid][n-1] >= target){
                    int lowR = 0;
                    int highR = n-1;
                    while(lowR <= highR){
                        int midR = (lowR + highR)/2;
                        if(nums[mid][midR] == target){
                            return true;
                        } else if(nums[mid][midR] > target){
                            highR = midR - 1;
                        } else {
                            lowR = midR + 1;
                        }
                    }
                    return false;
                } else {
                    low = mid + 1;
                }
            } else {
                high = mid - 1;
            } 
        }
        return false;
    }
};