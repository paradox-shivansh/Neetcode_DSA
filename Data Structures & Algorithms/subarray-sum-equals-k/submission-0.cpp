class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            
            int point=0;
            for(int j=i;j<nums.size();j++){
                point+=nums[j];
                if(point==k){
                    count++;
                }

            }
        }

        return count;
    }
};