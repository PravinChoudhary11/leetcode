class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int j=0;
        sort(nums.begin(),nums.end());
        for(int i=j+1;i<nums.size();i++){
            if(nums[i]==nums[j]) return true;
            j++;
        }
        return false;
    }
};