#include <stdio.h>

// 考虑左闭右闭区间[lelt, right]
// 场景1：能找到
// 场景3：找不到，在左边界    left
// 场景4：找不到，在后边界    left = right + 1, 即left
// 场景2：找不到，在中间      left = left + 1， 即left
int searchInsert1(int *nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;
    int middle = 0;
    while (left <= right) {
        // 防止left + right 溢出
        middle = left + (right - left) / 2;
        if (nums[middle] < target) {
            left = middle + 1;
        } else if (nums[middle] > target) {
            right = middle - 1;
        } else {
            return middle;
        }
    }
    return left;
}

// 考虑左闭右闭区间[lelt, right]
int searchInsert2(int *nums, int numsSize, int target)
{
    int left = 0;
    int right = numsSize - 1;
    int middle = 0;
    while (left <= right) {
        // 防止left + right 溢出
        middle = left + (right - left) / 2;
        if (nums[middle] < target) {
            printf("left : %d\n", left);
            left = middle + 1;
        } else if (nums[middle] > target) {
            printf("right : %d\n", right);
            right = middle - 1;
        } else {
            break;
        }
    }
    if (nums[middle] < target) {
        middle++;
    }
    return middle;
}

int main()
{
    int nums[] = {1, 3, 5, 6};
    int numsSize = sizeof(nums) / sizeof(int);
    int target = 7;
    int index = searchInsert2(nums, numsSize, target);
    printf("nums[%d]\n", index, target);
    return 0;
}