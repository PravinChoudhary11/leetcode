class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        int max = nums[0];
        int id = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                id = i;
            }
        }
        sort(nums.begin(),nums.end());
        if(max>=nums[nums.size()-2]*2){
            return id;
        }
        return -1;
    }
};