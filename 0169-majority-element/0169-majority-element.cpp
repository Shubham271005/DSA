class Solution {
public:
    int majorityElement(vector<int>& nums) {

            // moore voting algo
            // approach is that suppose the array is divided into many subarrays, the majority element will be in majority in atleast one of the subarrays. 
            // when cnt becomes 0, it means till that part there is no majority element, as our supposed ma got cancelled off .

            int n = nums.size();
            int ma = 0;
            int cnt = 0;

            for(int i=0; i<n; i++){
                if(cnt == 0){
                    ma = nums[i];
                }
                if(nums[i] == ma){
                    cnt++;
                } else {
                    cnt--;
                }
            }

            return ma;

        

        

    //     int n = nums.size();
    //     sort(nums.begin(), nums.end());
    //     return nums[(n-1)/2];
    }
};