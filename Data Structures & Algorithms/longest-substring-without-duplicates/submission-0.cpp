class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        unordered_map<char,int> mp;
        int right = 0;
       for(int i =0;i<s.length();i++){
        if(mp.find(s[i]) != mp.end()){
            left = max(mp[s[i]] + 1,left);
        }
        mp[s[i]] = i;
        right = max(right, i- left + 1);
       }
       return right;
    }
};
