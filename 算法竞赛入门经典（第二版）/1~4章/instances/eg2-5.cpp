/*
 * 输入一些整数，求出其最小值，最大值和平均值(保留三位小数)。
 * 输入保证这些数是不会超过1000的整数
 */
#include <cstdio>
#define INF 1001

int main() {
    int x, n = 0, min = INF, max = -INF, s = 0;
    /* scanf函数的返回值为成功输入的变量个数，输入结束时返回0
     * Windows中输入完毕后先按Enter键，再按Ctrl + Z键，最后再按Enter键即可结束输入
     * Linux下输入完毕后按Ctrl + D键即可结束输入
     * 但现代开发工具(CLion, VSC等)均按Ctrl+D才能结束
     */
    while (scanf("%d", &x) == 1) {
        s += x;
        if (x < min) min = x;
        if (x > max) max = x;
        n++;
    }
    printf("%d %d %.3lf\n", min, max, (double) s / n);
    return 0;
}
