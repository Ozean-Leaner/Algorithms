/*
 * 计算π/4=1-1/3+1/5-1/7...，直到最后一项小于1e-6
 */
#include <cstdio>

int main() {
    double ret = 0;
    for (int i = 0; ;++i) {
        double term = 1.0/(2 * i + 1);
        if (i%2==0)
            ret += term;
        else ret -= term;
        if (term < 1e-6)
            break;
    }
    printf("%lf", ret);
    return 0;
}
