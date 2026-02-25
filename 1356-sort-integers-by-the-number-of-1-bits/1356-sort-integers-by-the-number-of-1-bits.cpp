class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [&](int a, int b) {
            int bitA = countBit(a);
            int bitB = countBit(b);

            if (bitA == bitB) return a<b;
            return bitA < bitB;
        });
        return arr;        
    }

    int countBit(int n) {
        int bit = 0;
        while (n) {
            if (n & 1) bit++;
            n >>= 1;
        }
        return bit;
    }
};