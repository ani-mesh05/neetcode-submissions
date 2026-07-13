class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> Count;

        for(int i =0; i<nums.size();i++){
            int complement = target - nums[i];
            if(Count.count(complement)){
                return {Count[complement], i};
            }
            Count[nums[i]] = i;
        }
        return {};
    }
};
