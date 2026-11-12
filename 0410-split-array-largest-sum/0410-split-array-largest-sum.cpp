class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size(); 
        if(k > n) return -1;

        while(low <= high){
         int mid = (low + high)/2;
         int sum = 0;
         int subarrays = 1;
         for(int i=0; i<n; i++){
            if(sum + nums[i] > mid){
                subarrays++;
                sum = nums[i];
            } else {
                sum += nums[i];
            }
         }
         if(subarrays > k){
            low = mid + 1;
         } else {
            high = mid - 1;
         }
        }
        return low;
    }
};