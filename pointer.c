# include <stdio.h>
# include <stdbool.h>
int main(){
    int *p;// p라는 pointer points to an integer type data
    int a = 100; 
    p = &a;
    *p = 200;
    return 0;
    int a = 100;
    // int형 변수를 가느릭는데 그 값을 절대로 바꾸지 말라라는 의미.
    // pa가 가르키는 변수의 값을 바꾸면 안됨
    // a를 바꿀수는 있음.
    const int *pa = &a;
    // *pa = 3 -> wrong
    // pa = &b; -> correct
    // pa의 값이 바뀌면 안된다는 뜻
    int const *pa = &a;
    // *pa = 3 -> correct
    // pa = &b -> wrong.
    // pa는 int형이여서 4가 빠짐.
    printf("value of pa %p\n", pa);
    printf("value of (pa - 1) %p\n", pa - 1);
    return 0;
}