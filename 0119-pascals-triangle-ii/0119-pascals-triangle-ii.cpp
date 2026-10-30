class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>rows;
        rows.push_back(1);
        long ans = 1;
        for(int i=1; i<=rowIndex; i++){
            ans*=(rowIndex-i+1);
            ans/= i;
            rows.push_back(ans);
        }
        return rows;
    }
};