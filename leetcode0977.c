#include <stdlib.h>

// 双向指针
int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    int *newNums = (int *)malloc(sizeof(int) * numsSize);
    int begin = 0;
    int end = numsSize - 1;
    int index = numsSize - 1;
    while (begin <= end) {
        if (nums[begin] * nums[begin] > nums[end] * nums[end]) {
            newNums[index--] = nums[begin] * nums[begin];
            begin++;
        } else {
            newNums[index--] = nums[end] * nums[end];
            end--;
        }
    }
    *returnSize = numsSize;
    return newNums;
}