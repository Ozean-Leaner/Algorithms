/*
 * 输入一些整数，求出其最小值，最大值和平均值(保留三位小数)
 * 输入保证这些数是不会超过1000的整数
 * 输入包含多组数据，每组数据第一行是整数个数n，第二行是n个整数。
 * n=0为输入结束标记，程序将忽略该组数据
 * 相邻两组数据间输出一个空行
 */
#include <cstdio>
#define INF 1001

int main() {
    int n = 1, cnt = 1;
    while (true) {
        scanf("%d", &n);
        if (n == 0) break;
        int x, min = INF, max = -INF, s = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            if (x < min) min = x;
            if (x > max) max = x;
            s+=x;
        }
        printf("Case %d: %d %d %.3lf\n",cnt, min, max, (double)s/n);
        if (cnt > 1) printf("\n");
        cnt++;
    }
    return 0;
}