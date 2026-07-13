class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> Count;

        for(int num : nums){
            if(Count.count(num)){
                return true;
                
            }
            Count.insert(num);
        }
        return false;
    }
};