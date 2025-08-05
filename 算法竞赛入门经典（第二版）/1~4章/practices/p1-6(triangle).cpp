/*
 * 输入三角形3条边的长度值（均为正整数），判断是否能为直角三角形的3个边长
 * 若可以，输出yes，反之输出no
 * 若不能构成三角形，输出not a triangle
 */
#include <cstdio>

int main() {
    int a ,b ,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b<=c || a+c<=b || b+c<=a)
        printf("not a triangle");
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        printf("yes");
    else printf("no");
    return 0;
}
