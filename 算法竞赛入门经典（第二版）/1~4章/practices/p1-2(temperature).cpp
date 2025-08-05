/*
 * 输入华氏温度f，输出对应的摄氏温度c，保留三位小数
 * 提示：c=5(f-32)/9
 */
#include <cstdio>

int main() {
    int f;
    scanf("%d",&f);
    printf("%.3lf",5*(f-32)/9.0);
    return 0;
}
