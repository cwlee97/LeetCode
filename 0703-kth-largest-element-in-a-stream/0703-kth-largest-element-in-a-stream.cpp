#include <queue>
#include <algorithm>

class KthLargest {
public:
    std::priority_queue<int, vector<int>, std::greater<int>> nums_vector;
    int idx;
    
    KthLargest(int k, std::vector<int>& nums) {
        for(int i : nums) nums_vector.push(i);
        idx = k;
    }
    
    int add(int val) {
        nums_vector.push(val);
        while(nums_vector.size() > idx) nums_vector.pop();
        return nums_vector.top();
    }
};