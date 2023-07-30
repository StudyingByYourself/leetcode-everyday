// 快慢指针
int removeElement(int *nums, int numsSize, int val)
{
    int fast = 0;
    int slow = 0;
    while (fast < numsSize) {
        if (nums[fast] != val) {
            nums[slow++] = nums[fast];
        }
        fast++;
    }
    return slow;
}
