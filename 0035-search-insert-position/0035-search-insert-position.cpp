class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
            if(nums.size()==1){
             
            if(nums[nums.size()-1]>target){
                return 0;
            }
            else{
                return 1;
            }
            }
        }
            for(int j=0;j<nums.size();j++){
            if(nums[j]<target && nums[j+1]>target){
                return j+1;
            }
            else if(nums[nums.size()-1]<target){
                       return (nums.size());
            }
            }      
        return {};
    }
};