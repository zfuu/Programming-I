#include <stdio.h>

int main(void){

    unsigned int bunshi = 0;
    unsigned short bunbo = 0;

    printf("bunshi  ");
    scanf("%d", &bunshi);

    printf("bunbo  ");
    scanf("%hd", &bunbo);

    printf("remainder: %d\n", bunshi - (bunshi / bunbo)*bunbo);

    return 0;


}