class Solution {
public:
    vector<string> letterCombinations(string digits) {
        // std::string "abcdefghijklmnopqrstuvwxyz";
        if (digits == "") return {};

        std::vector<std::string> dict = {
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        auto it = digits.begin();
        std::vector<std::string> res = {""};

        for (auto digit : digits) {
            std::vector<std::string> tmp;
            int idx = digit - '0';

            for (auto ch : dict[idx]) {
                for (auto st : res) {
                    tmp.push_back(st+ch);
                }
            }
            tmp.swap(res);
        }

        return res;
    }
};