#include <stdio.h>

float find_mean(float data[]);
float find_variance(float data[]);

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

    printf("Variance of kokugo scores:  %f\n", find_variance(kokugo));
    printf("Variance of eigo scores:  %f\n", find_variance(eigo));
        
}

float find_mean(float data[]){
    float sum = 0;
    for (int i = 0; i < 10; ++i){
        sum += data[i];
    }
    return sum/10;
}

float find_variance(float data[]){
    float mean = 0, variance = 0;
    mean = find_mean(data);
    for (int i = 0; i < 10; ++i){
        variance += ((data[i] - mean)*(data[i] - mean)) / 10;
    }
    return variance;
}