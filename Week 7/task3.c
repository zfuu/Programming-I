#include <stdio.h>

int find_lowest_person(float data[]);

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

    printf("This person has the lowest kokugo score:  %d\n", find_lowest_person(kokugo));
    printf("This person has the lowest eigo score:  %d\n", find_lowest_person(eigo));        
}

int find_lowest_person(float data[]){
    float min = 101;
    int person = -1;
    for (int i = 0; i < 10; ++i){
        if (data[i] < min){
            min = data[i];
            person = i;
        }
    }
    return person;
}