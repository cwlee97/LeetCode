class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() == 0) return "";

        int left, right;
        int length = 0;
        int start = 0;

        for(int i = 0; i < s.size(); i++) {
            int left = i;
            int right = i;
            while(left >= 0 && right < s.size() && s[left] == s[right]) {
                if (right - left + 1 > length) {
                    length = right - left + 1;
                    start = left;
                }
                left--;
                right++;
            }

            left = i;
            right = i;
            while(left >= 0 && right+1 < s.size() && s[left] == s[right+1]) {
                if (right - left + 2 > length) {
                    length = right - left + 2;
                    start = left;
                }
                left--;
                right++;
            }
        }
        return s.substr(start, length);
    }
};