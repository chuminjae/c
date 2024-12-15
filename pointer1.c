# include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *parr= &arr[0];
    // arr[3] = *(parr + 3)
    //arr의 주소값과 arr[0]의 주소값은 같다.
    printf("sizeof(arr): %d\n", sizeof(arr)); // 40
    printf("sizeof(parr): %d\n", sizeof(parr)); // 8: sizeof 주소
    // 3[arr] = *(3 + arr), arr[3] = *(arr + 3);
    int *parr = arr;
    int sum = 0;
    while(parr - arr <= 9){
        sum += (*parr);
        parr++;
    }
    printf("Average of test: %d\n", sum / 10);
    return 0;

}