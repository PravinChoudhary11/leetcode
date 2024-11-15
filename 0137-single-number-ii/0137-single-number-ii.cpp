class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto i = mp.begin();i !=mp.end();i++){
            auto it = i->second;
            if(it == 1){
                return i->first;
            }
        }
        return {};
    }
};