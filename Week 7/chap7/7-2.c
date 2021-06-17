#include <stdio.h>

int main(){
        int i;
        float kokugo[10];                     /* array declaration */
        float eigo[10];                       /* array declaration */
        
        for(i = 0; i < 10; i = i+1){       /* read data into array element */
                scanf("%f%f",&kokugo[i],&eigo[i]);
        }
        
        for(i = 0; i < 10; i = i+1){      /* calculate using array elements */
                printf("%2d : %5.1f\n",i,(kokugo[i]+eigo[i])/2);
        }
}
