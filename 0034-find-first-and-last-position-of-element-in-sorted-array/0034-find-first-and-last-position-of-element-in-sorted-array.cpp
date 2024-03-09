class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res(2, -1);
        if (nums.empty()) return res;

        int left = 0;
        int right = nums.size() - 1;
        
        while (left <= right) {
            int middle = left + (right - left) / 2;
            
            if (nums[middle] < target) {
                left = middle + 1;
            } else if (nums[middle] > target) {
                right = middle - 1;
            } else {
                res[0] = middle;
                res[1] = middle;
                
                while (res[0] > 0 && nums[res[0] - 1] == target) {
                    res[0]--;
                }
                
                while (res[1] < nums.size() - 1 && nums[res[1] + 1] == target) {
                    res[1]++;
                }
                
                return res;
            }
        }
        return res;
    }
};