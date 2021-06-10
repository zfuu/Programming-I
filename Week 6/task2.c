#include <stdio.h>

void calculate(void);

int a[2][2] = {5, 0, 8, 1};
int b[2][2] = {1, -1, 3, 2};
int c[2][2] = {2, 1, 5, 10};
int d[2][2] = {1, -4, 2, -2};
int result1[2][2], result2[2][2];

int main(){
    calculate();

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", result1[i][j]);
        }
        printf("\n");
    } 
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", result2[i][j]);
        }
        printf("\n");
    } 
}

void calculate(void){
    result1[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
    result1[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
    result1[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
    result1[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];

    result2[0][0] = c[0][0] * d[0][0] + c[0][1] * d[1][0];
    result2[0][1] = c[0][0] * d[0][1] + c[0][1] * d[1][1];
    result2[1][0] = c[1][0] * d[0][0] + c[1][1] * d[1][0];
    result2[1][1] = c[1][0] * d[0][1] + c[1][1] * d[1][1];
}
