#include <stdio.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int a = 2*n - m/2;
    int b = m/2 - n;
    if (m%2 != 0 || a < 0 || b < 0) {
        printf("No answer");
        return 0;
    }
    printf("%d %d",a,b);
    return 0;
}
