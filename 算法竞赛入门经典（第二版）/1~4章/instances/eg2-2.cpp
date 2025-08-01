/*
 * 对于任意大于1的自然数n，若n为奇数，则使n变为3n+1，否则变为n的一半。经过若干次变换一定会使n变为1
 * 输入n，输出变换的次数。n≤10^9
 */
#include <cstdio>

int main() {
    /* 使用int时，若输入987654321可能会导致乘法溢出，因此用long long定义更安全。注意long long对应lld */
    long long n;
    int cnt = 0;
    scanf("%lld", &n);
    while (n!=1) {
        if (n % 2 == 0)
            n /= 2;
        else
            n = 3 * n + 1;
        cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}