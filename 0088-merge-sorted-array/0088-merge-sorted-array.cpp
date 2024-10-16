class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
        auto first = nums1.begin();
        auto last = nums1.end();
        for(int i=m;i<nums1.size();i++){
                nums1[i]=nums2[j];
                j++;
        }
        sort(first,last);
    }
};