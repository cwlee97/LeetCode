class Solution {
public:
    std::string multiply(std::string num1, std::string num2) {
        int n1 = num1.size();
        int n2 = num2.size();
        if (n1 == 0 || n2 == 0) return "0";

        std::vector<int> result(n1 + n2, 0);

        // Multiply each digit and sum at the corresponding positions
        for (int i = n1 - 1; i >= 0; i--) {
            for (int j = n2 - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int sum = mul + result[i + j + 1]; // Add to the existing value at that position
                result[i + j + 1] = sum % 10; // Current digit
                result[i + j] += sum / 10; // Carry
            }
        }

        // Remove leading zeros
        int start = 0;
        while (start < result.size() && result[start] == 0) {
            start++;
        }

        // Convert result to string
        std::string res;
        for (int i = start; i < result.size(); i++) {
            res.push_back(result[i] + '0');
        }

        // If result is empty, return "0"
        if (res.empty()) {
            return "0";
        }

        return res;
    }
};