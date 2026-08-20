class Solution {
public:

    vector<vector<int>> generate(int num) {
        vector<vector<int>>v;
        
        
        for(int i=0; i<num; i++){
            vector<int>rows;
            int ans = 1;
            // rows[0] = 1;
            for(int j=0; j<=i; j++){
                if(j > 0){
                ans *= (i-j+1);
                ans /= j;
              
                }
                  rows.push_back(ans);
            }
            v.push_back(rows);
        }
        return v;
    }
};