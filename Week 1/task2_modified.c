// This version of task 2 is modified off of the sample code given in the chapter of the book. That's what the exercise task asked for.
#include <stdio.h>

int addup(int i); 

int main(){     
    int i = 1;
    int sum;        
    sum = addup(i); 
    // printf("i was squared - it now equals %d\n",sum);
}
    
int addup(int i) {
    while (i <= 5){ 
        printf("i is %d\n", i*i);
        i = i + 1;              
    }
    
    // i = i * i;
    return (i);

}