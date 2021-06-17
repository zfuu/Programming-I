#include <stdio.h>

void cut_off(float []);

int main(){
        int    i;
        float kokugo[10],eigo[10];       /* array declaration */

        for(i = 0; i < 10; i = i+1){
                scanf("%f%f",&kokugo[i],&eigo[i]);
        }
        cut_off(kokugo);                /* pass an array as the argument */
        cut_off(eigo);                  /* pass an array as the argument */
        for(i = 0; i < 10; i = i+1){
                printf("%2d : %3.0f %3.0f\n",i,kokugo[i],eigo[i]);
        }
}
        
void cut_off(float kamoku[]){        /* receive an array as the argument */
        int    i;
        
        for(i = 0; i < 10; i = i+1){
                if(kamoku[i] < 60){
                        kamoku[i] = 0;   /* update elements of argument array */
                }
        }
}

