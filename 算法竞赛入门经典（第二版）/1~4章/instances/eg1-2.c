#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int x1,x2,x3;
    x1= x % 10;
    x2 = x / 10 % 10;
    x3 = x / 100;
    printf("%d%d%d\n", x1,x2,x3);   //无需去0
    printf("%d",100*x1+10*x2+x3);   //需去0
    return 0;
}
