#include <stdio.h>

// C doesn't have a "eval" function like some other languages (like Python), which makes this so much more annoying to make.

int main(){

    for(int i = 1; i <= 10; ++i){
        printf("%d\n", factorial(i));
    }

    return 0;

}

int factorial(int a){
    int out = 1;
    for(int i = a; i >= 1; --i){
        out*=i;
    }
    return out;
}