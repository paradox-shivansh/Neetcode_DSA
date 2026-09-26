class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());

        int high = 0;
        for (int weight : weights) {
            high += weight;
        }

        while (low < high) {

            int capacity = low + (high - low) / 2;

            int daysUsed = 1;
            int currentWeight = 0;

            for (int weight : weights) {

                if (currentWeight + weight > capacity) {
                    daysUsed++;
                    currentWeight = 0;
                }

                currentWeight += weight;
            }

            if (daysUsed <= days) {
                high = capacity;
            }
            else {
                low = capacity + 1;
            }
        }

        return low;
    }
};