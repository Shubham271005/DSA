class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int major = nums[0];
        int diff = 0;
        for(int i = 0; i<n; i++){
            if(diff == 0) major = nums[i];

            if(nums[i] == major){
                diff++;
            } else {
                diff--;
            } 
        }
        return major;
    }
};