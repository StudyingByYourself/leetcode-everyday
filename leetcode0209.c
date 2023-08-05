// 滑动窗口
int minSubArrayLen(int target, int *nums, int numsSize)
{
    int i = 0;
    int j = 0;
    int minLen = numsSize + 1;
    int sum = 0;
    int tmp = 0;
    while (j < numsSize) {
        sum += nums[j];
        while (sum >= target) {
            tmp = j - i + 1;
            minLen = minLen < tmp ? minLen : tmp;
            sum -= nums[i];
            i++;
        }
        j++;
    }
    return minLen == numsSize + 1 ? 0 : minLen;
}
