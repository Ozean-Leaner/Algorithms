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
