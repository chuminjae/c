# include <stdio.h>
int main(){
    int sum = 0;
    for(int i = 1; i <= 10; i = i + 1){
        sum += i;
        printf("%dth number's sum is %d\n", i, sum);
    }
    // same as while(1)
    int tmp;
    printf("Enter a number\n");
    for(;;){ 
        scanf("%d", &tmp);
        if(tmp == 3){
            printf("you got the answer\n");
            break;
        }
        else{
            printf("You are wrong\n");
        }
        
    }
    for(int i = 0; i < 10; i = i + 1){
        if(i % 5 == 0){
            continue;
        }
        printf("%d\n", i);
    }
    int i = 0;
    while(i <= 100){
        printf("%d\n", i);
        i = i + 1;
    }
    // do - while 무조건 한번은 실행.
    do{
        printf("Let's check");
    }while(i <= 100);
    return 0;
}