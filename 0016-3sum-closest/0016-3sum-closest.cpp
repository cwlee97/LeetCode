class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int res = 1e5;
        std::sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            int left = i+1;
            int right = nums.size()-1;

            while(left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (std::abs(sum - target) < std::abs(res - target))
                    res = sum;
            
                if (sum > target)
                    right--;
                else if (sum < target)
                    left++;
                else if (sum == target)
                    return sum;
            }
        }
        return res;
    }
};