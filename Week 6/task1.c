#include <stdio.h>
void pr_local(void);
void pr_global(int i);
int i = 20;
int main(){
    int i = 0;
    for (i = 0; i < 2; i++){
        pr_local();
        pr_global(i);
        printf("i-main1: %d \n", i);
    }
    printf("i-main2: %d \n", i);
}
void pr_local(void){
    static int i = 0;
    i = i + 1;
    printf("i-local: %d \n", i);
}
void pr_global(int i){
    i = i + 1;
    printf("i-global: %d \n", i);
}
