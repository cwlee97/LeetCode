class Solution {
public:
    int numSteps(string s) {
        bool prev_up = false;
        int cnt = 0;
        for (int i=1; i<s.size(); i++) {
            char c = s[s.size()-i];
            if (c == '1') {
                if (!prev_up) {
                    cnt++;
                }
                cnt++;
                prev_up = true;
            }
            else if (c == '0') {
                if (prev_up) { // handle as even num
                    cnt+=2;
                    prev_up = true;
                }
                else { // handle as odd num
                    cnt++;
                    prev_up = false;
                }
            }
        }
        if (prev_up) cnt++;
        return cnt;
    }
};