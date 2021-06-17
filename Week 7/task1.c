#include <stdio.h>

float find_mean(float data[]);
float find_variance(float data[]);

int main(){
    float kokugo[10];
    float eigo[10];

    for(int i = 0; i < 10; i = i+1){       /* read data into array element */
        scanf("%f%f",&kokugo[i],&eigo[i]);
    }

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
    float mean = 0, variance = 0, n = 0;
    mean = find_mean(data);
    for (int i = 0; i < 10; ++i){
        variance += ((data[i] - mean)*(data[i] - mean)) / 10;
    }
    return variance;
}