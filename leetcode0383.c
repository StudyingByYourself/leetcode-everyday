void moveZeroes(int *nums, int numsSize)
{
    int slow = 0;
    int fast = 0;
    while (fast < numsSize) {
        if (nums[fast] != 0) {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    for (; slow < numsSize; slow++) {
        nums[slow] = 0;
    }
}