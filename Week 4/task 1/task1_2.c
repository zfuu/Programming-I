#include <stdio.h>

int main(){
    unsigned char i = 1;
    unsigned char j;

    while(i > 0){
        j = i;
        i = i + 1;
    }
    printf("i = %hd(%hu, %#hx), j = %hd(%hu, %#hx)\n", i, i, i, j, j, j);
}