# include <stdio.h>
int main(){
    char a = 'a'; // have to use ''
    printf(" 1. %d 2. %c\n", a, a);
    double celsius;
    printf("Enter temp in celsius. \n");
    scanf("%lf", &celsius);
    // double type: lf, float: f
    printf("Celsius %f is %f farenheit", celsius, 9* celsius / 5 + 32);
    char ch;  // 문자
    short sh;  // 정수
    int i;
    long lo;

    float fl;  // 실수
    double du;

    printf("char 형 변수 입력 : ");
    scanf("%c", &ch);

    printf("short 형 변수 입력 : ");
    scanf("%hd", &sh);
    printf("int 형 변수 입력 : ");
    scanf("%d", &i);
    printf("long 형 변수 입력 : ");
    scanf("%ld", &lo);

    printf("float 형 변수 입력 : ");
    scanf("%f", &fl);
    printf("double 형 변수 입력 : ");
    scanf("%lf", &du);

    printf("char : %c , short : %d , int : %d ", ch, sh, i);
    printf("long : %ld , float : %f, double : %f \n", lo, fl, du);
    return 0;
} 