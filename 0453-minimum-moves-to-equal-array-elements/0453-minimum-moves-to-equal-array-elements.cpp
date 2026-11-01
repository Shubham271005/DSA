class Solution {
public:
    int minMoves(vector<int>& nums) {
       sort(nums.begin(), nums.end());

       int cnt = 0;
       int mini = nums[0];
       int n = nums.size();

       for(int i=n-1; i>0; i--){
         int val = nums[i];
         cnt = cnt + val;
         cnt = cnt - mini;
       }
    return cnt;
    }
};