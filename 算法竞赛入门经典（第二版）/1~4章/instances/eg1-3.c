#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("%d %d",a,b);    //三变量法
    /* 不采用中间变量法，适用范围有限
     * a = a + b;
     * b = a - b;
     * a = a - b;
     */

    /* 直接法：算法竞赛只关注结果
     * scanf("%d%d",&a,&b);
     * printf("%d %d",b,a);
     */

    return 0;
}
