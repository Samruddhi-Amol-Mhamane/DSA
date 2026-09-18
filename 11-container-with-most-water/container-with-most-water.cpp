class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        int lb=0;
        int rb=n-1;
        while(lb<rb){
            int w=rb-lb;
            int maxwater=min(height[lb],height[rb]);
            area=max(area,maxwater*w);
            if(height[lb]<height[rb]){
                lb++;
            }else{
                rb--;
            }
       
        }
    return area;
    }
};