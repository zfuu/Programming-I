#include <stdio.h>
#define  SIZE  21   /* defines the constant name SIZE */

int main(){
        char    image[SIZE][SIZE];
        int     i,j;

        for(j = 0; j < SIZE; j = j+1){
               float y = j-SIZE/2;
               for(i = 0; i < SIZE; i = i+1){
                        float x = i-SIZE/2;
                        if(x*x+y*y < 90){
                                image[j][i] = '#';
                        }else{
                                image[j][i] = '.';
                        }
                }
        }

        for(j = 0; j < SIZE; j = j+1){
                for(i = 0; i < SIZE; i = i+1){
                        printf("%c ",image[j][i]);
                }
                printf("\n");
        }
}

