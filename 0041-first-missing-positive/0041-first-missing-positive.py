class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        res = 1
        heapq.heapify(nums)
        while (len(nums) != 0):
            num = heapq.heappop(nums)

            if num > 0:
                if num == res:
                    res += 1
                elif num < res:
                    continue
                else:
                    return res
        return res
        