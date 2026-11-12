class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int n = weights.size();

        while(low <= high){
            int mid = (low + high)/2;
            int weightSum = 0;
            int dayCount = 1;
            for(int i=0; i<n; i++){
               weightSum += weights[i];
               if(weightSum > mid){
                dayCount++;
                i--;
                weightSum = 0;
               } 
            }
            if(dayCount <= days){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};