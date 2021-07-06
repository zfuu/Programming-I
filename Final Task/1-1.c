#include <stdio.h>

char utol(char c){
    return (c+0x20);
}

int main(){

    printf("upper: %c, lower: %c\n", 'A', utol('A'));

    return 0;
}
