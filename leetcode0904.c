#include <stdio.h>
#include <limits.h>

#define FRUIT_NUMBER 100000

int totalFruit(int *fruits, int fruitsSize)
{
    int i = 0;
    int ret = 0;
    int tmp = 0;
    int sum = 0;
    int ans[FRUIT_NUMBER] = {0};
    for (int j = 0; j < fruitsSize; j++) {
        if (ans[fruits[j]] == 0) {
            sum++;
        }
        ans[fruits[j]]++;
        while (sum > 2) {
            ans[fruits[i]]--;
            if (ans[fruits[i]] == 0) {
                sum--;
            }
            i++;
        }
        tmp = j - i + 1;
        ret = ret > tmp ? ret : tmp;
    }
    return ret;
}

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int totalFruit2(int *fruits, int fruitsSize)
{
    int ans[100000] = {0};                       // 简易哈希表，并初始化
    int max = INT_MIN;                           // 记录窗口最大值
    int sum = 0;                                 // 记录种类
    for (int i = 0, j = 0; i < fruitsSize; i++)  // 遍历数组
    {
        if (ans[fruits[i]] == 0)  // 当前树种类为0个，说明是新的种类
        {
            sum++;  // 窗口种类数目+1
        }
        ans[fruits[i]]++;  // 相同类型树数目+1
        while (sum > 2)    // 窗口种类数目》2 需要收缩窗口
        {
            ans[fruits[j]]--;
            if (ans[fruits[j]] == 0)  // 收缩到任意类型数目为0为止
            {
                sum--;
            }
            j++;
        }
        max = MAX(max, i - j + 1);
    }
    return max;
}

int main()
{
    int fruits[] = {1, 2, 1, 3};
    int fruitsSize = sizeof(fruits) / sizeof(int);
    int ret = totalFruit(fruits, fruitsSize);
    printf("ret = %d\n", ret);
    return 0;
}