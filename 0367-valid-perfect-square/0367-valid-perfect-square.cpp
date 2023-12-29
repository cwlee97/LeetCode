class Solution {
public:
    bool isPerfectSquare(int num) {
        int sqrt_num = static_cast<int>(std::sqrt(num));
        return sqrt_num * sqrt_num == num;
    }
};