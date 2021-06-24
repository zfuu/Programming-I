#include <stdio.h>

int M[2][2] = {6, 1, 5, 1};
int U[2][2] = {1, -1, 2, -2};

int V[2][2] = {0, 0, 0, 0};

int main(){

    for(int i = 0; i < 2; ++i){
        for(int j = 0; j < 2; ++j){
            V[i][j] = M[i][0] * U[0][j] + M[i][1] * U[1][j];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", V[i][j]);
        }
        printf("\n");
    } 

}