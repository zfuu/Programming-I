#include <stdio.h>

int main(){

    signed char a = 9, b = 12, c = 7, d = -7;

    printf("a=%d,b=%d,c=%d,d=%d \n", a, b, c, d);
    printf("(a/c+b/c)=%d, (a+b)/c=%d, d/c=%d,a%%c=%d \n",
           (a / c + b / c), (a + b) / c, d / c, a % c);
}