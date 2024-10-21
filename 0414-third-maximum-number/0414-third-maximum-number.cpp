class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int arr[nums.size()],k=1,count=0;
        arr[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            if(arr[k-1]!=nums[i]){
                arr[k]=nums[i];
                k++;}
            else{ count++; }   
        }
        int n = sizeof(arr)/sizeof(arr[0])-count;
        if(n==1) return arr[0];
        else if(n==2) return arr[n-1];
        else if(n>2) return arr[n-3];
        return { };
    } 
};