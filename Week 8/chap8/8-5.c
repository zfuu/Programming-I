#include <stdio.h>

int main(){
        char    image[21][21];  /* 2D array declaration */
        int     i,j;

        for(j = 0; j < 21; j = j+1){  /* make an image with this double loop */
               float y = j-10;
               for(i = 0; i < 21; i = i+1){
                        float x = i-10;
                        if(x*x+y*y < 90){
                                image[j][i] = '#';
                        }else{
                                image[j][i] = '.';
                        }
                }
        }

        for(j = 0; j < 21; j = j+1){  /* output an image with this double loop */
                for(i = 0; i < 21; i = i+1){
                        printf("%c ",image[j][i]);
                }
                printf("\n");
        }
}

