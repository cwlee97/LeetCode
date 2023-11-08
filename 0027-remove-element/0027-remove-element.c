int removeElement(int* nums, int numsSize, int val) {
    int* pt = nums;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] != val) {
            *pt = nums[i];
            pt++;
        }
    }
    return pt - nums;
}