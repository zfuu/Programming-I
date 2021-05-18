#include <stdio.h>

int main(){
    int i, j, n, my_id;
    j = 1;
    n = 3;
    my_id = 21; 
    while (n <= my_id){
        i = 2;
        while (i < n){
            if (n % i == 0){
                break;
            }else{
                i = i + 1; 
            }
        }
        if (i == n){
            printf("%5d", n);
            if (j % 10 == 0){
                printf("\n");
            }
            j = j + 1;
        }
        n = n + 1;
    }
    printf("\n");
}
