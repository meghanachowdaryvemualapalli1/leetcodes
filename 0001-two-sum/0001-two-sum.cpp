class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m; 
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            int curr = nums[i];
            int x = target - curr;
            if (m.find(x) != m.end()) {
                result.push_back(m[x]);
                result.push_back(i);
                return result;
            }     
            m[curr] = i;
        }
        return result;
    }
};
