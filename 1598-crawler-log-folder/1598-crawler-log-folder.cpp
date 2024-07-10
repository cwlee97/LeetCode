class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        for (string log : logs) {
            if (log == "../" && depth > 0) {
                depth--;
            }
            else if (log == "./" | log == "../") {
                continue;
            }
            else {
                depth++;
            }
        }
        return depth;
    }
};