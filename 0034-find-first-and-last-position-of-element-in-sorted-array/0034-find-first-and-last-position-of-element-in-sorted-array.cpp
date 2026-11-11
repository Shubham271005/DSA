class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = 0;
        int last = nums.size() - 1;
        int n = nums.size();

        // Standard binary search loop
        while (last >= first) {
            int mid = first + (last - first) / 2;  // avoid overflow

            // Case 1: found the target at index mid
            if (nums[mid] == target) {
                int l = mid;
                // expand left: keep moving left until the number changes
                while (l > 0 && nums[l - 1] == target) l--;

                int r = mid;
                // expand right: keep moving right until the number changes
                while (r < nums.size() - 1 && nums[r + 1] == target) r++;

                // return the first and last index where target appears
                return {l, r};
            }

            // Case 2: if target is smaller, move left
            if (nums[mid] > target) {
                last = mid - 1;
            }
            // Case 3: if target is larger, move right
            else {
                first = mid + 1;
            }
        }

        // If not found, return [-1, -1]
        return {-1, -1};
    }
};
