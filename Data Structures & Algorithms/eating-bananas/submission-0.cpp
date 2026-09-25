class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(),piles.end());
        int p1 = 1;
        int p2 = piles[piles.size() - 1];

        if(piles.size()==h){
            return piles[piles.size() - 1];
        }
        while (p1 <= p2) {

            int k = p1 + (p2 - p1) / 2;

            int time = 0;

            for (auto n : piles) {
                time += ceil((double)n / k);
            }

            if (time > h) {
                // k is too slow
                p1 = k + 1;
            }
            else {
                // k works, try smaller speed
                p2 = k - 1;
            }
        }

        return p1;
    }
};