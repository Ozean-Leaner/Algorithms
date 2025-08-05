/*
 * 输入年份，判断是否为闰年，若是则输出yes，若不是则输出no
 */
#include <cstdio>

int main() {
    int x;
    scanf("%d",&x);
    if (x%4==0 && x%100!=0 || x%400 == 0)
        printf("yes");
    else printf("no");
    return 0;
}
