class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int start = 0;
        int end = people.size() - 1;
        int cnt = 0;

        while (start <= end) {

            if (people[start] + people[end] <= limit) {
                // Lightest + heaviest can share a boat
                start++;
                end--;
            } 
            else {
                // Heaviest must go alone
                end--;
            }

            cnt++;
        }

        return cnt;
    }
};