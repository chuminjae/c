# include <stdio.h>
int main(){
    int a;
    int *pa;
    int **ppa;
    pa = &a;
    ppa = &pa;
    a = 3;
    printf("a : %d // *pa : %d // **ppa : %d \n", a, *pa, **ppa);
    printf("&a : %p // pa : %p // *ppa : %p \n", &a, pa, *ppa);
    printf("&pa : %p // ppa : %p \n", &pa, ppa);
    // arr의 크기가 3이기 때문에 &arr를 보관하는 parr이라는 포인터의 크기를 3으로 지정.
    // int *parr[3] -> 둘은 다른거임, 이건 int 포인터형 원소를 3개 가지는 배열.
    // *parr[1] = arr[1].
    // sizeof or &가 쓰이지 않을때 arr는 arr[0]을 가르키는 포인터로 치환됨.
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int(*parr)[3]; // 배열 포인터
    parr = arr;
    printf("전체 크기 : %d \n", sizeof(arr));
    printf("총 열의 개수 : %d \n", sizeof(arr[0]) / sizeof(arr[0][0]));
    printf("총 행의 개수 : %d \n", sizeof(arr) / sizeof(arr[0]));
    int *arr1[3];
    int a = 1, b= 2, c = 3;
    arr1[0] = &a;
    arr1[1] = &b;
    arr1[2] = &c;
    return 0;
}