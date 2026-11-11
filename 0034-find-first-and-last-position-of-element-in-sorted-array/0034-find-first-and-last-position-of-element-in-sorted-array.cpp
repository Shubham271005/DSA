class Solution {
public:
    int firstOccurance(vector<int>& nums, int target){
        int n = nums.size();
        int l = 0, r = n-1;
        int ans = -1;
        while(l<=r){
            int  mid = (l+r)/2;
            if(nums[mid] == target){
                ans = mid;
                r = mid-1;
            } else if(nums[mid] > target){
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        return ans;
    }

    int lastOccurance(vector<int>& nums, int target){
        int n = nums.size();
        int l = 0, r = n-1;
        int ans = -1;
        while(l<=r){
            int  mid = (l+r)/2;
            if(nums[mid] == target){
                ans = mid;
                l = mid+1;
            } else if(nums[mid] > target){
                r = mid - 1;
            }else {
                l = mid + 1;
            }
        }
        return ans;
    }


    vector<int> searchRange(vector<int>& nums, int target) {
        int left = firstOccurance(nums, target);
        int right = lastOccurance(nums, target);
        return {left, right};
    }
};