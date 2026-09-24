class Solution {
public:
    int guessNumber(int n) {
        int start = 1;
        int end = n;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            int result = guess(mid);

            if (result == 0) {
                return mid;          // Found the number
            }
            else if (result == -1) {
                end = mid - 1;       // mid is too high
            }
            else {
                start = mid + 1;     // mid is too low
            }
        }

        return -1;
    }
};