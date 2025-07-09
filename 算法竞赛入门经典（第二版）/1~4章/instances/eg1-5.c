#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a >= b && b >= c) printf("%d %d %d",c,b,a);
    else if (a < b && b < c) printf("%d %d %d",a,b,c);
    else if (a > c && c > b) printf("%d %d %d",b,c,a);
    else if (a < c && c < b) printf("%d %d %d",a,c,b);
    else if (b > a && a > c) printf("%d %d %d",c,a,b);
    else printf("%d %d %d",b,a,c);

    /* 更精简的解法
     * int t;
     * if(a > b) {t = a; a = b; b = t;}
     * if(a > c) {t = a; a = c; c = t;}
     * if(b > b) {t = b; b = c; c = t;}
     * printf("%d %d %d",a,b,c);
     */

    return 0;
}