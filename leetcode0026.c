int removeDuplicates(int *nums, int numsSize)
{
    if (numsSize == 1) {
        return 1;
    }
    int slow = 0;
    int fast = 1;
    while (fast < numsSize) {
        if (nums[fast] != nums[slow]) {
            nums[++slow] = nums[fast];
        }
        fast++;
    }
    slow++;
    return slow;
}
