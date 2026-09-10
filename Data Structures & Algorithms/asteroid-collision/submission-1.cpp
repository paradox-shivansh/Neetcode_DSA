class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        vector<int> s;

        for(int current : asteroids) {

            bool destroyed = false;

            while(!s.empty() && s.back() > 0 && current < 0) {

                if(s.back() < -current) {
                    // stack asteroid is destroyed
                    s.pop_back();
                }
                else if(s.back() == -current) {
                    // both are destroyed
                    s.pop_back();
                    destroyed = true;
                    break;
                }
                else {
                    // current asteroid is destroyed
                    destroyed = true;
                    break;
                }
            }

            if(!destroyed) {
                s.push_back(current);
            }
        }

        return s;
    }
};