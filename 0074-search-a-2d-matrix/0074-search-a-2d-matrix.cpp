class Solution {
public:
    bool binarysearch(vector<int> nums,int target){
        int first = 0;
        int last = nums.size()-1;
        int mid =0;
        while(first<=last){
            mid = first+(last-first)/2;
            if(nums[mid] == target){
                return true;
            }
            else if(nums[mid]>target){
                last = mid-1;
            }
            else{
                first = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            bool found = binarysearch(matrix[i],target);
            if(found == true){
                return found;
            }
        }

        return false;
    }
};