#include <stdio.h>

float get_average(float kamoku[]);    /* prototype declaration */

int main(){
        int     i;
        float   kokugo[10],eigo[10];

        for(i = 0; i < 10; i = i+1){
                scanf("%f%f",&kokugo[i],&eigo[i]);
        }
        printf("kokugo no heikin = %5.1f\n",get_average(kokugo));/* pass an array as the argument */
        printf("eigo   no heikin = %5.1f\n",get_average(eigo)); /*  pass an array as the argument */
}

float get_average(float kamoku[]){  /* receive the array as the argument */
        int     i;
        float   sum = 0;              /* 0 clear */
        for(i = 0; i < 10; i = i+1){
                sum = sum+kamoku[i];   /* addition */
        }
        return sum/10;
}
