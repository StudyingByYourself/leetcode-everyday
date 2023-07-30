// 考虑左闭右闭区间[lelt, right]
int BinarySearch1(int *arr, int length, int target)
{
    int left = 0;
    int right = length - 1;
    int middle = 0;
    while (left <= right) {
        // 防止left + right 溢出
        middle = left + (right - left) / 2;
        if (arr[middle] < target) {
            left = middle + 1;
        } else if (arr[middle] > target) {
            right = middle - 1;
        } else {
            return middle;
        }
    }
    return -1;
}

// 考虑左闭右开区间[left, right)
int BinarySearch2(int *arr, int length, int target)
{
    int left = 0;
    int right = length;
    int middle = 0;
    while (left < right) {
        // 防止left + right 溢出
        middle = left + (right - left) / 2;
        if (arr[middle] < target) {
            left = middle + 1;
        } else if (arr[middle] > target) {
            right = middle;
        } else {
            return middle;
        }
    }
    return -1;
}