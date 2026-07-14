class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int longest = 0;
     unordered_set<int> numSet(nums.begin(), nums.end());

     for(int num : numSet){
        if(numSet.find(num-1) == numSet.end() ){
            int current = num;
            int largest = 1;

            while(numSet.find(current+1) != numSet.end()){
                current++;
                largest ++;
            }
            longest = max(longest, largest);
        }
        
     }
        return longest;

    }
};
