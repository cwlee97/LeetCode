int removeDuplicates(int* nums, int numsSize) {
    int* pt = nums;
    pt++;
    
    for (int i = 0; i < numsSize; i++){
        if (nums[i] != *(pt-1)) {
            *pt = nums[i];
            pt++;
        }
    }
    int new_size = pt - nums;
    
    return new_size;
    
}