class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int start = 0;
        int end = people.size() - 1;
        int boats = 0;

        while (start <= end) {

            // If lightest + heaviest can fit together
            if (people[start] + people[end] <= limit) {
                start++;
            }

            // Heaviest person gets a boat in either case
            end--;
            boats++;
        }

        return boats;
    }
};