# include <stdio.h>
int main(){
    int i;
    printf("input: ");
    scanf("%d", i);
    if(i == 7){
        printf("you entered 7");
    }else if(i == 6){
        printf("you enterd 6");
        
    }else{
        printf("you did not entered 7");
    }
    return 0;
}
/*
if(a) 만약 a가 0이면 execute 안함
a가 1이면 execute
*/