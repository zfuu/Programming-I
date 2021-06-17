#include <stdio.h>

float find_lowest(float data[]);

int main(){
    float kokugo[10];
    float eigo[10];
    
    for(int i = 0; i < 10; i = i+1){       /* read data into array element */
        scanf("%f%f",&kokugo[i],&eigo[i]);
    }

    printf("Lowest kokugo score:  %f\n", find_lowest(kokugo));
    printf("Lowest eigo score:  %f\n", find_lowest(eigo));        
}

float find_lowest(float data[]){
    float min = 101;
    for (int i = 0; i < 10; ++i){
        if (data[i] < min){
            min = data[i];
        }
    }
    return min;
}