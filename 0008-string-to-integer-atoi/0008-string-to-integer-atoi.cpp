class Solution {
public:
    int myAtoi(string s) {
        bool changed = false;
        bool neg = false;
        long long res = 0;
        
        for (char c : s) {
            if (res > INT_MAX || res < INT_MIN) break;
            
            if (c == '-') {
                if (changed == false) {
                    changed = true;
                    neg = true;
                }
                else break;
            }
            else if (c == '+') {
                if (changed == false) {
                    changed = true;
                    neg = false;
                }
                else break;
            }
            else if (c == ' ') {
                if (changed == true) break;
                continue;
            }
            else if (c == '.') return res;
            else if (48 > (int)c || 57 < (int)c) {
                break;
            }
            else {
                changed = true;
                res *= 10;
                res += c - '0';
            }
        }       
        
        if (neg == true) res *= -1;
        
        if (res > INT_MAX) return INT_MAX;
        else if (res < INT_MIN) return INT_MIN;
        
        return res;
    }
};