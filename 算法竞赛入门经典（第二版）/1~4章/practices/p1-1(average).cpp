/*
 * 输入3个整数，输出它们的平均值，保留三位小数
 */
#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.3lf",(a+b+c)/3.0);
    return 0;
}