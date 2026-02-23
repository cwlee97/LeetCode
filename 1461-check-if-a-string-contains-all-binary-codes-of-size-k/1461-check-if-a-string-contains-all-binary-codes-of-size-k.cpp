class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if (s.size() < k) return false;
        
        unordered_set<string> res;
        for (int i = 0; i <= s.size()-k; i++) {
            res.insert(s.substr(i, k));
        }
        return res.size() == 1<<k;
    }
};