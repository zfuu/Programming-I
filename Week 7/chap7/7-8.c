#include <stdio.h>
float get_max(float kamoku[]);

int main(){
        int i;
        float kokugo[10],eigo[10];

        for(i = 0; i < 10; i = i+1){
                scanf("%f%f",&kokugo[i],&eigo[i]);
        }
        printf("max_kokugo = %5.1f\n",get_max(kokugo));
        printf("max_eigo   = %5.1f\n",get_max(eigo));
}
        
float get_max(float kamoku[]){
        int        i;
        float      max;
        
        max = -1;           /* the initial value of the highest score is set to 0 or less */
        for(i = 0; i < 10; i = i+1){
                if(max < kamoku[i]){ /* if there is a score greater than max */
                        max = kamoku[i]; /* update the value of max */
                }
        }
        return max;
}

