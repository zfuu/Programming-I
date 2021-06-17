#include <stdio.h>

int main(){
        int     i,j;
        double  u[2],v[2],m[2][2];

        u[0] = 1; u[1] = 1;

        m[0][0] = 1; m[0][1] = 2; 
        m[1][0] = 3; m[1][1] = 4; 

        for(i = 0; i < 2; i = i+1){   /* let's understand this double loop correctly */
                v[i] = 0;
                for(j = 0; j < 2; j = j+1){
                        v[i] = v[i]+m[i][j]*u[j];
                }
        }
        
        printf("v = (%f,%f)\n",v[0],v[1]);
}

