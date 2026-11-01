class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefixMax = INT_MIN;
        int suffixMax = INT_MIN;
        int prefixProd = 1;
        int suffixProd = 1;
        int n = nums.size();

        for(int i=0; i<n; i++){
            prefixProd *= nums[i];
            suffixProd *= nums[n-i-1];

            
            prefixMax = max(prefixProd , prefixMax);
            suffixMax = max(suffixProd, suffixMax);

            if(prefixProd == 0) prefixProd = 1;
            if(suffixProd == 0) suffixProd = 1;


        }
        int maxi = max(prefixMax, suffixMax);
        return maxi;
    }
};