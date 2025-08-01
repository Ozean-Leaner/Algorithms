/*
* 已知鸡和兔的总数量为n，总腿数为m，输入n和m并依次输出鸡的数目和兔的数目，若无解输出No Answer
*/
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
