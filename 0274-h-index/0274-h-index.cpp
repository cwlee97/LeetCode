class Solution {
public:
    int hIndex(vector<int>& citations) {
        int pivot = 0;
        
        std::sort(citations.begin(), citations.end(), std::greater<int>());

        for (int i = 0; i < citations.size(); ++i) {
            if (citations[i] >= i + 1) {
                pivot = i + 1;
            } else {
                break;
            }
        }
        
        return pivot;
    }
};