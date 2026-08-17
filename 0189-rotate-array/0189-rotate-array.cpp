class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());







        // int n = nums.size();
        // k = k%n;
        // for(int i=0; i<n-k; i++){
        //     nums.push_back(0);
        // }
        // int x = 0;
        // for(int i=n; i<2*n-k; i++){
        //     nums[i] = nums[x];
        //     x++;
        // }
        // nums.erase(nums.begin(), nums.begin()+n-k);
        
    }
};