class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int max_area=0;

        while(start<end){
            int lenght = end - start;
            int curr_height = min(height[start],height[end]);
            int area = lenght * curr_height;
            max_area = max(max_area,area);
            
            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return max_area;
    }
};