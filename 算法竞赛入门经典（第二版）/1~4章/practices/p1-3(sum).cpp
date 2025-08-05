/*
 * 输入正整数n，输出1+2+...+n的值
 */
#include <cstdio>

int main() {
    int n;
    scanf("%d",&n);
    printf("%d",n*(1+n)/2);
    return 0;
}
