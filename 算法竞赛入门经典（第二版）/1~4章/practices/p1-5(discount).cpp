/*
 * 一件衣服95元，若消费满300元，可打八五折。
 * 输入购买衣服的件数，输出需要支付的金额，保留两位小数
 */
#include <cstdio>

int main() {
    int x;
    scanf("%d",&x);
    if (x>3) printf("%.2lf",x*95*0.85);
    else printf("%d",x*95);
    return 0;
}
