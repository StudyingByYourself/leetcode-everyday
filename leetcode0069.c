int mySqrt(int x)
{
    int left = 0;
    int right = x;
    long middle = 0;
    while (left <= right) {
        middle = left + (right - left) / 2;
        if (middle * middle > (long)x) {
            right = middle - 1;
        } else if (middle * middle < (long)x) {
            left = middle + 1;
        } else {
            return middle;
        }
    }
    if (middle * middle > (long)x) {
        middle--;
    }
    return middle;
}
