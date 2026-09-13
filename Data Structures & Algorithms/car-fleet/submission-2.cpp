class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> cars;
        stack<double> f;
        for(int i=0;i<position.size();i++){
            cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(),cars.end());

        for(int i=cars.size()-1;i>=0;i--){
            double time=(double)(target-cars[i].first)/cars[i].second;
            if(f.empty()){
                f.push(time);
                continue;
            }
            if(!f.empty() && f.top()<time){
                f.push(time);
            }
        }
        
        return f.size();
    }
};
