class Solution {
public:
    int reverse(int x) {
        if (x == 0) {
            return 0;
        }
        
        while (x % 10 == 0)
            x = x / 10;
        
        std::string converted_x = std::to_string(x);
        if (converted_x[0] == '-') {
            std::reverse(converted_x.begin()+1, converted_x.end());
        }
        else {
            std::reverse(converted_x.begin(), converted_x.end());
        }
        
        double res = stol(converted_x);
        
        return (res >= INT_MAX || res < INT_MIN) ? 0 : res;
    }
};