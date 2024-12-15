# include <stdio.h>
# include <stdbool.h>
int main(){
    int *p;// p라는 pointer points to an integer type data
    int a = 100; 
    p = &a;
    *p = 200;
    return 0;
}