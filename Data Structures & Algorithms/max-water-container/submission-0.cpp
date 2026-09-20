class Solution {
public:
    int maxArea(vector<int>& heights) {
        int m=INT_MIN;
        int start=0;
        int end=heights.size()-1;

        while(start<end){
            if(heights[start]>heights[end]){
                m = max(m,heights[end]*(end-start));
                end--;
            }else if(heights[start]<heights[end]){
                m = max(m,heights[start]*(end-start));
                start++;
            }else{
                m = max(m,heights[start]*(end-start));
                start++;
                end--;
            }
            

            
        }
        return m;
    }
};
