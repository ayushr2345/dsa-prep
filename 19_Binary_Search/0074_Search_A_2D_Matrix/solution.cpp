class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int high = m * n - 1;
        int mid = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            int x = mid / n;
            int y = mid -  x * n;
            if (matrix[x][y] == target) {
                return true;
            } else if (matrix[x][y] > target) {
                high = mid - 1;
            } else if (matrix[x][y] < target) {
                low = mid + 1;
            }
        }
        return false;
    }
};