/**
 * 复刻书上A1至A5的实验
 */
#include <cstdio>
#include <cmath>

int main() {
    /* A1 */
    printf("%d\n",11111*11111);
    printf("%d\n",111111*111111);
    printf("%d\n",111111111*111111111);

    /* A2 */
    printf("%lf\n",11111.0*11111);
    printf("%lf\n",111111.0*111111);
    printf("%lf\n",111111111.0*111111111);

    /* A3 */
    printf("%lf\n",sqrt(-10)); //nan
    printf("%d\n",sqrt(-10)); //0

    /* A4 */
    printf("%d\n",1.0/0.0); //0
    printf("%lf\n",1.0/0.0); //inf
    printf("%d\n",0.0/0.0); //0
    printf("%lf\n",0.0/0.0); //nan

    /* A5 */
    printf("%d\n",1/0);
    printf("%lf\n",1/0);
    /* 两者均会导致计算不出结果 */


    return 0;
}
