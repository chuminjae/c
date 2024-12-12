# include <stdio.h>
// 배열의 크기는 변수로 지정할수 없다.
int main(){
    int prime[100];
    prime[0] = 2;
    prime[1] = 3;
    int cnt = 0;
    int num = 4;
    int index = 2;
    while(1){
        for(int i = 1; i <= num; i = i + 1){
            if(num % i == 0){
                cnt ++;
            }
        }
        if(cnt == 2){
            prime[index] = num;
            index ++;
        }
        num ++;
        cnt = 0;        
        if(index == 100){
            break;
        }
    }
    for(int i = 0; i < 100; i = i + 1){
        printf("%d prime number is: %d\n", i + 1, prime[i]);
    }
    int arr[3] = {1}; // {1,0,0};
    return 0;
}
/*int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Third element of the array is %d\n", arr[2]);
    return 0;*/
    /*int average = 0;
    int student[1000];
    int number;
    printf("Enter a number\n");
    scanf("%d", &number);
    printf("Enter the score of each students\n");
    for(int i = 0; i < number; i = i + 1){
        scanf("%d", &student[i]);
    }
    for(int i = 0; i < number; i = i + 1){
        average += student[i];
    }
    average /= number;
    for(int i = 0; i < number; i = i + 1){
        if(average > student[i]){
            printf("%d student failed: %d\n", i + 1, student[i]);
        }
        else{
            printf("%d student passed: %d\n", i + 1, student[i]);
        }
    }*/