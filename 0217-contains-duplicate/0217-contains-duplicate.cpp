class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
       unordered_set<int>ans;

       for(int i=0; i<n; i++) {
        if(ans.find(nums[i]) != ans.end()) {
            return true;
        }
        ans.insert(nums[i]);
       }
       return false;
    }
};