/*
 * 输入正整数n(n<360)，输出n度的正弦、余弦函数值
 */
#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d",&n);
    printf("%lf %lf",sin(n),cos(n));
    return 0;
}
