class Solution {
public:
    int mySqrt(int x) {
       int low = 0, high = x;
       int ans = 0;
       while(high >= low){
        int mid = (high + low)/2;
        if(1LL *mid*mid == x) return mid;
        if(1LL *mid*mid > x){
            high = mid - 1;
        } else {
           ans = mid;
           low = mid + 1;
            }
       } 
       return ans;
    }
};