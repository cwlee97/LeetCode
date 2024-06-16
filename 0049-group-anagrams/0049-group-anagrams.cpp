class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string, vector<string>> mapStrs;
        for (string str : strs) {
            string sorted_str = str;
            sort(sorted_str.begin(), sorted_str.end());
            mapStrs[sorted_str].push_back(str);
        }
        
        for (auto iter = mapStrs.begin(); iter != mapStrs.end(); iter++) {
        result.push_back(iter->second);
        }
        return result;
    }
};