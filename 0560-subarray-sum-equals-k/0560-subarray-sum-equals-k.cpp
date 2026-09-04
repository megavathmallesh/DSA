class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        map[0] = 1;
        int n = nums.size();
        int preSum = 0; 
        int cnt = 0;

        for(int i=0; i<n; i++) {
            preSum += nums[i];
            int remove = preSum - k;
            cnt += map[remove];
            map[preSum] += 1;
        }
        return cnt;
    }
};