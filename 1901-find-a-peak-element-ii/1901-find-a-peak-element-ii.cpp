class Solution {
public:
    int maxIndex(vector<vector<int>>& mat, int m, int n, int col){
        int maxValue = -1;
        int index = -1;

        for(int i=0; i<m; i++){
            if(mat[i][col] > maxValue){
                maxValue = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0, high = n - 1;

        while(low <= high){
            int mid = (low + high)/2;
            int maxRowIndex = maxIndex(mat, m, n, mid);
            int maxElement = mat[maxRowIndex][mid];
            int left = -1, right = -1;

            if(mid >= 1){
                left = mat[maxRowIndex][mid - 1];
            }

            if(mid < n - 1){
                right = mat[maxRowIndex][mid + 1];
            }

            if(maxElement > right && maxElement > left){
                return {maxRowIndex, mid};
            } else if(maxElement < right){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return {-1, -1};
    }
};