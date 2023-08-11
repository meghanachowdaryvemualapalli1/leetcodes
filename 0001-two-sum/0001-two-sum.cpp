class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(auto t1=nums.begin();t1!=nums.end();++t1){
            auto t2=find(t1+1,nums.end(),target-*t1);
            if(t2!=nums.end()){
                result.push_back(t1-nums.begin());
                result.push_back(t2-nums.begin());
                break;
            }
        }
        return result;
    }
};