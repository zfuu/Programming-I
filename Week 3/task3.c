#include <stdio.h>

int main(){
    int i, j, n, my_id;
    j = 1;
    // n = 3;
    my_id = 200; 

    for ( n = 3; n <= my_id; n = n+1){
        // i = 2;

        for (i = 2; i < n; ++i){
            if (n % i == 0){
                break;
            }
            // else{
            //     i = i + 1; 
            // }
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