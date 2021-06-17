#include <stdio.h>

int main(){
        float kokugo0, kokugo1, kokugo2, kokugo3, kokugo4, kokugo5, kokugo6, 
              kokugo7, kokugo8, kokugo9;
        float eigo0,eigo1,eigo2,eigo3,eigo4,eigo5,eigo6,eigo7,eigo8,eigo9;

        scanf("%f%f",&kokugo0,&eigo0);/* load scores into variables */
        scanf("%f%f",&kokugo1,&eigo1);
        scanf("%f%f",&kokugo2,&eigo2);
        scanf("%f%f",&kokugo3,&eigo3);
        scanf("%f%f",&kokugo4,&eigo4);
        scanf("%f%f",&kokugo5,&eigo5);
        scanf("%f%f",&kokugo6,&eigo6);
        scanf("%f%f",&kokugo7,&eigo7);
        scanf("%f%f",&kokugo8,&eigo8);
        scanf("%f%f",&kokugo9,&eigo9);
        
        printf("%2d : %5.1f\n",0,(kokugo0+eigo0)/2);/* output the average score */
        printf("%2d : %5.1f\n",1,(kokugo1+eigo1)/2);
        printf("%2d : %5.1f\n",2,(kokugo2+eigo2)/2);
        printf("%2d : %5.1f\n",3,(kokugo3+eigo3)/2);
        printf("%2d : %5.1f\n",4,(kokugo4+eigo4)/2);
        printf("%2d : %5.1f\n",5,(kokugo5+eigo5)/2);
        printf("%2d : %5.1f\n",6,(kokugo6+eigo6)/2);
        printf("%2d : %5.1f\n",7,(kokugo7+eigo7)/2);
        printf("%2d : %5.1f\n",8,(kokugo8+eigo8)/2);
        printf("%2d : %5.1f\n",9,(kokugo9+eigo9)/2);
}
