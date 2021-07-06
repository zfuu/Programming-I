#include <stdio.h>


void get_min_student(int numberOfPeople, float grades[]);

int main(){

    float d[12] = {2,2,3,4,5,4,3,2,3,4,2,2};

    get_min_student(12, d);

    return 0;
}

void get_min_student(int numberOfPeople, float grades[]){

    float min = 101;

    for (int i = 0; i < numberOfPeople; ++i){
        if (grades[i] < min){
            min = grades[i];
        }
    }

    for (int i = 0; i < numberOfPeople; ++i){
        if (grades[i] == min){
            printf("%d\n", i);
        }
    }

}

