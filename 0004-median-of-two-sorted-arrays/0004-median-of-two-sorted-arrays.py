class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        merged_arr = sorted(nums1 + nums2)
        merged_len = len(merged_arr)
        
        if (merged_len % 2 == 0) :
            return (merged_arr[merged_len//2] + merged_arr[merged_len//2 - 1]) / 2
        
        else :
            return merged_arr[merged_len//2]
        