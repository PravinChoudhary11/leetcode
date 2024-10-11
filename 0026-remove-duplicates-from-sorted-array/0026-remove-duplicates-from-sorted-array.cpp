class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int n = nums.size(),k=0;
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j] && i!=j){
                break;
            }
            else if(i==j){
                nums[k]=nums[i];
                k++;
            }
        }
       }
       return (k);
    }
};