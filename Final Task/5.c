#include <stdio.h>
#include <math.h>

#define SIZE_X 41
#define SIZE_Y 21
#define PIE 3.14159265359

void init(void);
void plot(void);
void disp(void);

char square[SIZE_X][SIZE_Y];
int x, y;
int Offset = SIZE_Y / 2;

int main(){
    init();
    plot();
    disp();
    return 0;
}

void init(void){
    // initialization
    for (y = 0; y < SIZE_Y; y++){
        for (x = 0; x < SIZE_X; x++){
            if (y == SIZE_Y / 2){
                square[x][y] = '-';
            }
            else{
                square[x][y] = ' ';
            }
        }
    }
}

void plot(void){
    // plot
    for (x = 0; x < SIZE_X; x++){
        y = Offset + Offset * sin(2.0 * PIE * x / SIZE_X);
        square[x][y] = '*';
        y = 0.5 * (x) - 1;
        square[x][y] = '+';
    }
}

void disp(void){
    // display
    for (y = SIZE_Y - 1; y >= 0; y--){
        for (x = 0; x < SIZE_X; x++){
            printf("%c", square[x][y]);
        }
        printf("\n");
    }
}