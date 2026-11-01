class Solution {
public:
    int minMoves(vector<int>& nums) {
    int mini = INT_MAX;
    int n = nums.size();

      for(int i=0; i<n; i++){
        mini = min(mini, nums[i]);
      }
       int cnt = 0;
       
       for(int i=n-1; i>=0; i--){
         int val = nums[i];
         cnt = cnt + val;
         cnt = cnt - mini;
       }
    return cnt;
    }
};