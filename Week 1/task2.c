#include <stdio.h>

int square(int i);

int main(){

    for(int i = 1; i <= 5; ++i){
        printf("i is %d\n", square(i));
    }
    return 0;

}

int square(int i){
    return i*i;
}