#include <stdio.h>

int main(){
    int i, j, n, my_id;
    j = 1;
    n = 3;
    my_id = 21; 

    for (; n <= my_id; ++n){
        i = 2;

        for (; i < n; ++i){
            if (n % i == 0){
                break;
            }
        }
    if (i == n){
            printf("%5d", n);
            if (j % 10 == 0){
                printf("\n");
            }
            j = j + 1;
        }

    }


    printf("\n");
}