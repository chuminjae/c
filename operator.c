# include <stdio.h>
int main(){
    int a, b;
    a = 11;
    b = 4;
    printf("The result of a + b is %d\n", a + b);
    printf("The result of a - b is %d\n", a - b);
    printf("The result of a * b is %d\n", a * b);
    printf("The result of a / b is %d\n", a / b);
    printf("The result of a %% b is %d\n", a % b);
    // printf("The result of a / b is %f\n", a / b); 
    // error 정수형 단위의 연산은 정수형이 나와야됨.
    a++; // return a = a + 1
    ++a; // return a, and calculate a + 1;
    return 0;
}
/*
1 & 1 = 1
1 & 0 = 0
0 & 1 = 0
0 & 0 = 0

Example: 1010 & 0011 = 0010

1 | 1 = 1
1 | 0 = 1
0 | 1 = 1
0 | 0 = 0

1 ^ 1 = 0
1 ^ 0 = 1
0 ^ 1 = 1
0 ^ 0 = 0

~1 = 0
~0 = 1

비트 쉬프트
<< left shift
>> right shift

2 ^ n holds before 상위비트 소멸

int = 00000000 00000000 00000000 00000000
*/