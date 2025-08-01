/*
 * 输出所有形如aabb的四位完全平方数
 */
#include <cstdio>
#include <cmath>

int main() {
    for (int i = 1; i <= 9; ++i)
        for (int j = 0; j <= 9; ++j) {
            int n = i * 1100 + j * 11;
            /* floor函数返回不超过x的最大整数，加上0.5以实现四舍五入，避免误差导致的类似0.99经floor计算为0的情况 */
            int m = floor(sqrt(n) + 0.5);
            if (m * m == n)
                printf("%d\n ", n);
        }
    return 0;
}