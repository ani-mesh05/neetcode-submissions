class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();

        if(n != m ){
            return false;
        }

        unordered_map<char, int> CountS;
        unordered_map<char, int> CountT;
        for(int i =0; i<n;i++){
            CountS[s[i]]++;
            CountT[t[i]]++;
        }
        return CountS == CountT;

    }
};
