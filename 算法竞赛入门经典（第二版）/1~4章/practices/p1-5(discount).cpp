#include <cstdio>

int main() {
    int x;
    scanf("%d",&x);
    if (x>3) printf("%.2lf",x*95*0.85);
    else printf("%d",x*95);
    return 0;
}
