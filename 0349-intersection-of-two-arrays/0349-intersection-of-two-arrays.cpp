class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
         vector<int> arr;
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                int count = 0;
                for (int k = 0; k < arr.size(); k++) {
                    if (arr[k] == nums1[i]) {
                        count=1;
                        break;
                    }
                }
                if (count == 0) {
                    arr.push_back(nums1[i]);
                }
            }
        }
    }
    return arr;
    }
};