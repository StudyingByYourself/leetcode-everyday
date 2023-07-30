#include <stdbool.h>

bool isPerfectSquare(int num)
{
    int left = 1;
    int right = num;
    long middle = 0;
    while (left <= right) {
        middle = left + (right - left) / 2;
        if (middle * middle > (long)num) {
            right = middle - 1;
        } else if (middle * middle < (long)num) {
            left = middle + 1;
        } else {
            return true;
        }
    }
    return false;
}
