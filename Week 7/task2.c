#include <stdio.h>

float find_lowest(float data[]);

int main(){
    float kokugo[10];
    float eigo[10];
    
    FILE *input = fopen("input","r");
        
    if (input == NULL){
        printf("no such file.\n");
        return 0;
    }

    for (int i = 0; i < 10; ++i){
        fscanf(input, "%f%f", &kokugo[i], &eigo[i]);
    }
    fclose(input);

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