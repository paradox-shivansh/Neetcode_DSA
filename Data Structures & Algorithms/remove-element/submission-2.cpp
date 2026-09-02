class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int k = nums.size();
        int i = 0;

        while(i<k){
            if(nums[i]==val){
                // swap(nums[i],nums[k-1]);
                nums[i] = nums[k-1];
                k--;
            }else{
                i++;
            }
        }

        return k;
    }
};