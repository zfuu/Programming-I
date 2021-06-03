#include <stdio.h>

char ltou(char c);

int main(){
    printf("I am %c %c. \n", ltou ('z'), ltou ('f'));
    return 0;
}

char ltou(char c){
    return c - 32;
}

