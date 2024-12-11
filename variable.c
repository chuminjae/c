# include <stdio.h>
int main(){
    int a = 10; // integer
    char b = 1;
    double c = 10.2;
    float d = 3.1411592f;
    float dd = 3;
    printf("The value of a is %d\n", a); // 10
    printf("The value of a is %o\n", a); // 8
    printf("The value of a is %x\n", a); // 16
    printf("The value of a is %f\n", c); // double, float
    printf("The value of a is %f\n", d); // double, float 항상 소숫점 붙여줘야됨
    printf("The value of a is %.2f\n", d); // 무조건 소숫점 2번째까지 출력.
    printf("The value of a is %5f\n", d);  // 5자리 출력 123--> "  123"
    printf("The value of a is %5f\n", d); // 123456 --> 123456
    return 0;
}