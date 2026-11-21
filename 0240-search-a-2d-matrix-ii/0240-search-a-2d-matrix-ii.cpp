class Solution {
public:
    bool searchMatrix(vector<vector<int>>& nums, int target) {
        int m = nums.size();
        int n = nums[0].size();
        int row = 0;
        int column = n-1;

        while(row < m && column >= 0){
            if(nums[row][column] == target){
                return true;
            } else if(nums[row][column] > target) {
                column--;
            } else {
                row++;
            }
        }
        return false;
    }
};