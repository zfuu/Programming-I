#include <stdio.h>
int main(){

    int input;
    printf("Sukina suuwo irete Return-key wo osu>>>");
    scanf("%d", &input);

    if (input < 50){
        printf("Konosuu %d ha 50 miman desu\n",input);
    }
    if (input < 70){
        printf("Konosuu %d ha 70 miman desu\n", input);
    }
    if (input < 100){
        printf("Konosuu %d ha 100 miman desu\n", input);
    }else{
        printf("%d ha doredemonai\n", input);
    }

    printf("Jikkou OWARI!\n");
    return 0;
}

