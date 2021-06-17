#include <stdio.h>

int main(){
        int i;
        float kokugo[10],eigo[10];               /* array declaration */
        float sum;
        
        for(i = 0; i < 10; i = i+1){
                scanf("%f%f",&kokugo[i],&eigo[i]);
        }
        
        sum = 0;                                  /* 0 clear */
        for(i = 0; i < 10; i = i+1){
                sum = sum+kokugo[i];            /* addition */
        }
        printf("kokugo no heikin = %5.1f\n",sum/10);

        sum = 0;                                  /* 0 clear */
        for(i = 0; i < 10; i = i+1){
                sum = sum+eigo[i];              /* addition */
        }
        printf("eigo no heikin   = %5.1f\n",sum/10);

}

