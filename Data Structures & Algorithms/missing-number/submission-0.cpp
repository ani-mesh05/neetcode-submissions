class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s =  nums.size();
        int xorr = s;

        for(int i=0;i<s;i++){
            xorr ^= i ^ nums[i];
        }
return xorr;
    }
};
