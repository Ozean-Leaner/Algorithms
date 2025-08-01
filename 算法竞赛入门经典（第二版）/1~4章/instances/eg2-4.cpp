/*
 * 输入n，计算S=1!+2!+3!+...+n!的末六位(不含前导0)。n≤10^6
 */
#include <cstdio>
#include <ctime>

int main() {
    const int MOD = 1000000;   //增强可读性
    int n, S = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        int factorial = 1;
        for (int j = 1; j <= i; ++j)
            factorial = factorial * j % MOD;
        S = S + factorial % MOD;
    }
    printf("%d\n", S%MOD);
    /* 使用clock()/CLOCKS_PER_SEC记录运行时间，需直接用控制台执行才能不计入键盘录入时间 */
    printf("Time used: %lf\n", (double)clock()/CLOCKS_PER_SEC);
    return 0;
}