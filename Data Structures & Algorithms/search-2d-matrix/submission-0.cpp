class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        for (int i = 0; i < matrix.size(); i++) {

            int start = 0;
            int end = matrix[i].size() - 1;

            // Check if target can be in this row
            if (target > matrix[i][end]) {
                continue;
            }

            while (start <= end) {

                int mid = start + (end - start) / 2;

                if (matrix[i][mid] == target) {
                    return true;
                }
                else if (matrix[i][mid] > target) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }

            return false;
        }

        return false;
    }
};